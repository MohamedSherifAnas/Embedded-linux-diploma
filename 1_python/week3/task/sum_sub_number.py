from tkinter import *

#First create window
root=Tk()
root.title("Sum Sub of two number")
root.geometry("500x500+600+200")

v=IntVar()
def calc_result():
    num1=int(entry1.get())
    num2=int(entry2.get())
    input=v.get()

    if input == 1:
        result=num1+num2
        label3.config(text=f"The Sum is: {result}")
    else:
        result=num1-num2
        label3.config(text=f"The Sub is: {result}")

#create Labels 
label1=Label(root,text="Enter First num",fg="black")
label1.grid(row=0,column=0)

label2=Label(root,text="Enter Second num",fg="black")
label2.grid(row=1,column=0)

label3=Label(root,text="",fg="black")
label3.grid(row=2,column=1)

#create entry
entry1=Entry(root)
entry1.grid(row=0,column=1)

entry2=Entry(root)
entry2.grid(row=1,column=1)

#buttons
sum=Radiobutton(root,text="Sum",variable=v,value=1)
sum.grid(row=3,column=0)

sub=Radiobutton(root,text="sub",variable=v,value=2)
sub.grid(row=4,column=0)

result=Button(root,text="Calculate",fg="black",command=calc_result)
result.grid(row=5,column=1)

root.mainloop()