from pydrive.auth import GoogleAuth
from pydrive.drive import GoogleDrive

print("Dang tai du lieu len server, ba chiu kho cho xiu nha")

gauth = GoogleAuth()

gauth.LoadCredentialsFile("Uploader\RequestUpload\mycreds.txt")
if gauth.credentials is None:
    gauth.LocalWebserverAuth()
elif gauth.access_token_expired:
    gauth.Refresh()
else:
    gauth.Authorize()
gauth.SaveCredentialsFile("Uploader\RequestUpload\mycreds.txt")

drive = GoogleDrive(gauth)

file1 = drive.CreateFile()
file1.SetContentFile('Uploader\RequestUpload\Request.txt')
file1.Upload()
