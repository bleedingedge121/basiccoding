# User input
fileName = input("File name: ").strip()

# Split the string at '.' to find extension
extention = fileName.split(".")[-1].lower()

if extention == "gif":
        print("image/gif")
elif extention == "jpg" or extention == "jpeg":
        print("image/jpeg")

elif extention == "png":
        print("image/png")

elif extention == "pdf":
        print("application/pdf")

elif extention == "txt":
        print("text/plain")
elif extention == "zip":
        print("application/zip")
