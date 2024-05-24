import mysql.connector
from http.server import SimpleHTTPRequestHandler, HTTPServer
import json
import os
from datetime import date

# Database connection
db_config = {
    'user': '',
    'password': '',
    'host': 'localhost',
    'database': ''
}

def insert_user(data):
    try:
        conn = mysql.connector.connect(**db_config)
        cursor = conn.cursor()
        sql = "INSERT INTO users (name, email, phone, dob, description) VALUES (%s, %s, %s, %s, %s)"
        cursor.execute(sql, (data['name'], data['email'], data['phone'], data['dob'], data['description']))
        conn.commit()
        print("Data inserted successfully")
    except mysql.connector.Error as err:
        print(f"Error: {err}")
    finally:
        cursor.close()
        conn.close()

def fetch_users():
    users = []
    try:
        conn = mysql.connector.connect(**db_config)
        cursor = conn.cursor()
        cursor.execute("SELECT * FROM users")
        users = cursor.fetchall()
        print("Data fetched successfully")
    except mysql.connector.Error as err:
        print(f"Error: {err}")
    finally:
        cursor.close()
        conn.close()
    
    # Format dates to string
    formatted_users = []
    for user in users:
        formatted_user = list(user)
        formatted_user[4] = formatted_user[4].strftime('%Y-%m-%d') if isinstance(formatted_user[4], date) else formatted_user[4]
        formatted_users.append(formatted_user)

    return formatted_users

class CustomHandler(SimpleHTTPRequestHandler):
    def do_POST(self):
        if self.path == '/submit':
            content_length = int(self.headers['Content-Length'])
            post_data = self.rfile.read(content_length)
            data = json.loads(post_data)
            insert_user(data)
            self.send_response(200)
            self.send_header('Content-type', 'application/json')
            self.end_headers()
            self.wfile.write(json.dumps({'status': 'success'}).encode('utf-8'))

    def do_GET(self):
        if self.path == '/show':
            users = fetch_users()
            self.send_response(200)
            self.send_header('Content-type', 'application/json')
            self.end_headers()
            self.wfile.write(json.dumps(users).encode('utf-8'))
        else:
            super().do_GET()

if __name__ == '__main__':
    web_dir = os.path.join(os.path.dirname(__file__))
    os.chdir(web_dir)
    server_address = ('', 8080)
    httpd = HTTPServer(server_address, CustomHandler)
    print('Starting httpd on port 8080...')
    httpd.serve_forever()
