import pyautogui
import webbrowser
from time import sleep

url="https://mail.google.com/"
webbrowser.open(url)
sleep(2)

three_dots=None
while three_dots is None:
    try:
        # Move the mouse to the "three dots" button and click 
        three_dots = pyautogui.locateOnScreen('threedots.png')  # Replace with actual image file or use coordinates
    except pyautogui.ImageNotFoundException:
        print("Image Not Found")

pyautogui.click(three_dots)

sleep(2)

pyautogui.click(three_dots.left+20,three_dots.top+50)