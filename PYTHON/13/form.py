from tkinter import *

master = Tk()
master.title('IMP QUESTIONS')

w = Label(master, text='Are you stupid?')
w.pack()
Lb = Listbox(master)
Lb.insert(1, 'Kinda')
Lb.insert(2, 'In denial')
Lb.insert(3,'Dunno')
Lb.pack()

w = Label(master, text='Are you gonna fail this semester?')
w.pack()
b = Listbox(master)
b.insert(1, 'Definitely')
b.insert(2, 'Obviously')
b.insert(3,'I think so')
b.insert(4, 'Teachers think so')
b.pack()
def which_button(button_press):
    print(button_press)

button = Button(master, text='SUBMIT', width=25,command=lambda: which_button(ourMessage))
button.pack()

ourMessage ='YOUR\nCONDITION\nIS\nUNFORTUNATELY\nHOPELESS'
messageVar = Message(master, text = ourMessage,justify='center')
messageVar.config()



master.mainloop()

