#python code to show the battery percentage in notification

from plyer import notification
import psutil

battery = psutil.sensors_battery()
percent = battery.percent
print(percent)

notification.notify(title="Battery Health",message=f'Battery is {percent}',app_name="python notification EXample",timeout=10)
