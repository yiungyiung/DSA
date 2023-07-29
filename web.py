import csv
import requests
from bs4 import BeautifulSoup

url = "http://sitpune.edu.in/"
response = requests.get(url)
soup = BeautifulSoup(response.content, "html.parser")

# Get the nav bar content
nav_bar = soup.find("nav")
nav_bar_content = nav_bar.find_all("a")

# Get the bottom bar content
bottom_bar = soup.find("footer")
bottom_bar_content = bottom_bar.find_all("p")

# Save the content to a file
with open("content.csv", "w") as f:
    writer = csv.writer(f)
    writer.writerow(["Nav Bar", nav_bar_content])
    writer.writerow(["Bottom Bar", bottom_bar_content])
