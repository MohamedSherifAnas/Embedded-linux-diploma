import pyautogui
from time import sleep

#location=None
#while location is None:
 #   try:
  #      location=pyautogui.locateOnScreen('vscode.png')
   #     sleep(1)
    #    pyautogui.moveTo(location.left,location.top)
    #except pyautogui.ImageNotFoundException:
     #   print('Image Not Found')


pyautogui.hotkey("ctrl","Alt","t")
sleep(1)
pyautogui.write("code")

# Press Enter to start the search
pyautogui.press('enter')
sleep(1)


# Press Ctrl+Shift+X to open Extensions view
pyautogui.hotkey('ctrl', 'shift', 'x')
sleep(2)

# Type "clangd" to search for the Clangd extension
pyautogui.write("clangd")
sleep(2)

# Press Enter to start the search
pyautogui.press('enter')
sleep(2)

# Move the mouse to the "Install" button and click to install the extension
install_button = pyautogui.locateOnScreen('install_button.png')  # Replace with actual image file or use coordinates
pyautogui.click(install_button)
sleep(10)  # Adjust waiting time as needed for installation to complete
