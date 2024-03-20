import youtube_dl

def download_facebook_video(url, output_path):
    ydl_opts = {
        'outtmpl': output_path,
        'format': 'bestvideo[ext=mp4]+bestaudio[ext=m4a]/best[ext=mp4]/best',
    }

    with youtube_dl.YoutubeDL(ydl_opts) as ydl:
        info_dict = ydl.extract_info(url, download=False)

        if 'entries' in info_dict:
            # URL points to a playlist, pick first video
            video_url = info_dict['entries'][0]['webpage_url']
        else:
            # URL points to a video
            video_url = info_dict['webpage_url']

        # Download video
        with youtube_dl.YoutubeDL(ydl_opts) as ydl:
            ydl.download([video_url])

# Usage
url = 'https://www.facebook.com/share/v/DtcTgYj7entU9kLf/?mibextid=oFDknk'
output_path = 'path/to/save/video.mp4'

download_facebook_video(url, output_path)