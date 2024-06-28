import requests
import webbrowser
from pprint import pprint

def get_my_ip():
    url = 'https://api.ipify.org/?format=json'
    response = requests.get(url)
    data = response.json()
    return data['ip']


my_ip = get_my_ip()
print('My IP address is:', my_ip)

link= "https://ipinfo.io/"+str(my_ip)+"/geo"

response=requests.get(link)
data = response.json()
pprint(data)

#webbrowser.open(link)

