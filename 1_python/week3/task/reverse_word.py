#program to take input from the user and reverse it
import tkinter as tk


def reverse_word():
    word = entry.get()
    reversed_word = word[::-1]
    label2.config(text=f"The reversed word is: {reversed_word}")

# Create the main application window
root = tk.Tk()
root.title("Reverse Word")

# Create a label and entry widget for user input
label1 = tk.Label(root, text="Enter a word:")
label1.pack(pady=10)
entry = tk.Entry(root)
entry.pack(pady=10)

label2 = tk.Label(root, text="")
label2.pack(pady=10)

# Create a button to trigger word reversal
button = tk.Button(root, text="Reverse", command=reverse_word)
button.pack(pady=10)

# Start the tkinter main loop
root.mainloop()