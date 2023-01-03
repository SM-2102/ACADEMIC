# create GUI to prepare scientific calculator

from tkinter import *

expression = ""

def press(num):
    global expression
    expression =expression +str(num)
    equation.set(expression)

def equals():
    try:
        global expression
        total = str(eval(expression))
        equation.set(total)
        expression = ""
    except:
        equation.set("Error")
        expression = ""

def clear():
    global expression
    expression = ""
    equation.set("")

if __name__ == "__main__":
    root = Tk()
    root.title('Calculator') 
    root.configure(bg='#E6E6FA')   
    equation = StringVar(value='0')
    input = Entry(root, textvariable=equation,bd = 7,width=14, font=("Lucida Console",24), justify=RIGHT)
    input.grid(row=0, column=0, columnspan=5,pady=5,padx=4)

    btn_ac = Button(root, text="AC", height=2, width=8,activebackground = '#FFCCCB',bg = '#ADD8E6',command = clear).grid(row=4, column=0,pady=4)
    btn_div = Button(root, text="/", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('/')).grid(row=1, column=3,pady=4)
    btn_7 = Button(root, text="7", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(7)).grid(row=1, column=0,pady=4)
    btn_8 = Button(root, text="8", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(8)).grid(row=1, column=1,pady=4)
    btn_9 = Button(root, text="9", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(9)).grid(row=1, column=2,pady=4)
    btn_mult = Button(root, text="*", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('*')).grid(row=2, column=3,pady=4)
    btn_4 = Button(root, text="4", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(4)).grid(row=2, column=0,pady=4)
    btn_5 = Button(root, text="5", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(5)).grid(row=2, column=1,pady=4)
    btn_6 = Button(root, text="6", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(6)).grid(row=2, column=2,pady=4)
    btn_sub = Button(root, text="-", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('-')).grid(row=3, column=3,pady=4)
    btn_1 = Button(root, text="1", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(1)).grid(row=3, column=0,pady=4)
    btn_2 = Button(root, text="2", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(2)).grid(row=3, column=1,pady=4)
    btn_3 = Button(root, text="3", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(3)).grid(row=3, column=2,pady=4)
    btn_add = Button(root, text="+", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press('+')).grid(row=4, column=3,pady=4)
    btn_0 = Button(root, text="0", height=2, width=8,activebackground = '#FFCCCB',command = lambda: press(0)).grid(row=4, column=1,pady=4)
    btn_equals = Button(root, text="=", height=2, width=8,activebackground = '#FFCCCB',command = equals).grid(row=4, column=2,pady=4)
    decimal = Button(root,text = '.',height=2,width=8,activebackground='#FFCCCB',command = lambda: press('.')).grid(row=5,column=1,pady=4)

root.mainloop()