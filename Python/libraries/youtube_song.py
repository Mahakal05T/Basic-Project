 # importing packages
from pytube import YouTube
import os

# url input from user
yt = YouTube(
	str(input("Enter the URL of the video you want to download: \n>> ")))

# extract only audio
video = yt.streams.filter(only_audio=True).first()

# Specify the destination directly
destination = r"C:\Users\ayush\Music" 

# Ensure the output directory exists
os.makedirs(destination, exist_ok=True)

# download the file
out_file = video.download(output_path=destination)

# save the file
base, ext = os.path.splitext(out_file)
new_file = base + '.mp3'
os.rename(out_file, new_file)

# result of success
print(yt.title + " has been successfully downloaded.")
