#program to take input from the user and calculate its factorial

import tkinter as tk
import math  

def calc_factorial():
    num = int(entry.get())
    fac = math.factorial(num)
    label2.config(text=f"The Factorial of {num} is  {fac}")

# Create the main application window
root = tk.Tk()
root.title("factorial")

# Create a label and entry widget for user input
label1 = tk.Label(root, text="Enter a Number: ")
label1.pack(pady=10)
entry = tk.Entry(root)
entry.pack(pady=10)

label2 = tk.Label(root, text="")
label2.pack(pady=10)

# Create a button to trigger word reversal
button = tk.Button(root, text="Factorial", command=calc_factorial)
button.pack(pady=10)

# Start the tkinter main loop
root.mainloop()