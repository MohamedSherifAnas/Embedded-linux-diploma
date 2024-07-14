#program to make gauge like pic

from tkinter import *

root=Tk()
root.title("gauge")
root.geometry("500x500+500+200")

#labels
label1=Label(root,text="Press",fg="black").pack()

#Canvas Widget
C = Canvas(root)

#arc = C.create_arc(250, 50, 120,120,start=40,extent=100,fill="red")

C.create_oval(50, 50, 350, 350, outline='black', width=2)
C.create_arc(50, 50, 350, 350, start=150, extent=240, outline='black', width=2, style=ARC)




C.pack()

root.mainloop()