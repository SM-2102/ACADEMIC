# create a Gui to open blank window
# click on it
# print if it is right, left or middle click

from  tkinter import *
window = Tk()
window.title("GUI")

def left_click(event):
    print('Left Click')

def middle_click(event):
    print("Middle Click")

def right_click(event):
    print("Right Click")

window.bind("<Button-1>", left_click)
window.bind("<Button-2>", middle_click)
window.bind("<Button-3>", right_click)
window.mainloop()