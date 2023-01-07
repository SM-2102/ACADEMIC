# data entry and load data

import tkinter
from tkinter import messagebox
import os
import openpyxl
from tkcalendar import DateEntry

def entry():
    def enter_data():
        accepted = accept_var.get()
        
        if accepted=="Accepted":
            firstname = first_name_entry.get()
            middlename = middle_name_entry.get()
            lastname = last_name_entry.get()
            
            if firstname and lastname:
                if firstname.isalpha() and lastname.isalpha():
                    if middlename:
                        middlename = middlename + ' '
                    name = firstname+' '+middlename+lastname
                    age = age_spinbox.get()
                    dateofbirth = dob_entry.get()
                    gender =gen()
                    contactno=contactno_entry.get()
                    email = email_entry.get()

                    department = dept.get()
                    if department not in departments:
                        tkinter.messagebox.showwarning(title="Error", message="Enter your department.")

                    semester = sem_spinbox.get()
                    rollno = rollno_entry.get()

                    if len(contactno)==10:
                        try:
                            contactno = int(contactno)
                        except:
                            tkinter.messagebox.showwarning(title="Error", message="Enter correct contact number.")
                    else:
                        tkinter.messagebox.showwarning(title="Error", message="Enter correct contact number.")
                    
                    filepath = "D:\PROGRAMS\ACADEMIC\PYTHON\data.xlsx"
                    
                    if not os.path.exists(filepath):
                        workbook = openpyxl.Workbook()
                        sheet = workbook.active
                        heading = ['Name','Age','Date of Birth','Gender','Contact No','Email','Department','Semester','Roll No']
                        sheet.append(heading)
                        workbook.save(filepath)
                    workbook = openpyxl.load_workbook(filepath)
                    sheet = workbook.active
                    sheet.append([name, age, dateofbirth, gender, contactno,email,department,semester,rollno]) 
                    workbook.save(filepath)
                else:
                    tkinter.messagebox.showwarning(title="Error", message="Enter proper name.")      
            else:
                tkinter.messagebox.showwarning(title="Error", message="First name and last name are required.")
        else:
            tkinter.messagebox.showerror(title= "Error", message="You have not accepted the terms")

    window = tkinter.Tk()
    window.title("Data Entry Form")

    frame = tkinter.Frame(window)
    frame.pack()

    def gen():
        gen = var.get()
        if gen==1:
            gender = 'Male'
        elif gen==2:
            gender = 'Female'
        else:
            gender = 'Others'
        return gender

    pers_info =tkinter.LabelFrame(frame, text="Personal Information")
    pers_info.grid(row= 0, column=0, padx=20, pady=10)

    first_name_label = tkinter.Label(pers_info, text="First Name")
    first_name_label.grid(row=0, column=0)
    middle_name_label = tkinter.Label(pers_info, text="Middle Name")
    middle_name_label.grid(row=0, column=1)
    last_name_label = tkinter.Label(pers_info, text="Last Name")
    last_name_label.grid(row=0, column=2)

    first_name_entry = tkinter.Entry(pers_info)
    first_name_entry.grid(row=1, column=0)
    middle_name_entry = tkinter.Entry(pers_info)
    middle_name_entry.grid(row=1, column=1)
    last_name_entry = tkinter.Entry(pers_info)
    last_name_entry.grid(row=1, column=2)

    age_label = tkinter.Label(pers_info, text="Age")
    age_spinbox = tkinter.Spinbox(pers_info, from_=18, to=110)
    age_label.grid(row=2, column=0)
    age_spinbox.grid(row=3, column=0)

    dob_label = tkinter.Label(pers_info, text="Date of Birth")
    dob_label.grid(row=2, column=1)
    dob_entry=DateEntry(pers_info,selectmode='day',date_pattern='dd-MM-yyyy')
    dob_entry.grid(row=3,column=1)

    gender_label = tkinter.Label(pers_info, text="Gender")
    gender_label.grid(row=2, column=2)
    var = tkinter.IntVar()
    radiobutton1 = tkinter.Radiobutton(pers_info, variable=var,text="Male", value=1,command=gen)
    radiobutton1.grid(row=3, column=2)
    radiobutton2 = tkinter.Radiobutton(pers_info, variable=var,text="Female", value=2,command=gen)
    radiobutton2.grid(row=4, column=2)
    radiobutton3 = tkinter.Radiobutton(pers_info, variable=var,text="Others", value=3,command=gen)
    radiobutton3.grid(row=5, column=2)

    contactno_label = tkinter.Label(pers_info, text="Contact Number")
    contactno_label.grid(row=4, column=0)
    contactno_entry = tkinter.Entry(pers_info)
    contactno_entry.grid(row=5, column=0)

    email_label = tkinter.Label(pers_info, text="Email Id")
    email_label.grid(row=4, column=1)
    email_entry = tkinter.Entry(pers_info)
    email_entry.grid(row=5, column=1)

    for widget in pers_info.winfo_children():
        widget.grid_configure(padx=10, pady=5)

    acad_info = tkinter.LabelFrame(frame,text = 'Academic Information')
    acad_info.grid(row=1, column=0, padx=20, pady=10)

    departments = ['CSE','IT','ECE','EE','AIML']
    dept_label = tkinter.Label(acad_info, text="Department")
    dept_label.grid(row=0, column=0)
    dept = tkinter.ttk.Combobox(acad_info, values=departments)
    dept.grid(row=1,column=0)

    sem_label = tkinter.Label(acad_info, text="Semester")
    sem_label.grid(row=0, column=1)
    sem_spinbox = tkinter.Spinbox(acad_info, from_=1, to=8)
    sem_spinbox.grid(row=1, column=1)

    rollno_label = tkinter.Label(acad_info, text="Roll Number")
    rollno_label.grid(row=0, column=2)
    rollno_entry = tkinter.Entry(acad_info)
    rollno_entry.grid(row=1, column=2)

    for widget in acad_info.winfo_children():
        widget.grid_configure(padx=10, pady=5)

    terms_frame = tkinter.LabelFrame(frame, text="Terms & Conditions")
    terms_frame.grid(row=2, column=0, sticky="news", padx=20, pady=10)

    accept_var = tkinter.StringVar(value="Not Accepted")
    terms_check = tkinter.Checkbutton(terms_frame, text= "I accept the terms and conditions.",
                                    variable=accept_var, onvalue="Accepted", offvalue="Not Accepted")
    terms_check.grid(row=0, column=0)

    button = tkinter.Button(frame, text="Enter data", command= enter_data)
    button.grid(row=3, column=0, sticky="news", padx=20, pady=10)
    
    window.mainloop()

if __name__ == "__main__":
    root = tkinter.Tk()
    root.title('Data Collection')  

    label = tkinter.Label(root, text="STUDENTS' RECORD FOR 2022 - 2023",font = ('Lucida Console',18))
    label.grid(row=0, column=0,pady=5,padx=10)
    options = tkinter.Label(root)
    options.grid(row=1, column=0)
    btn_1 = tkinter.Button(options, text="ENTER DATA", height=2, width=15,activebackground = '#FFCCCB',command = entry)
    btn_1.grid(row=1, column=0,pady=10,padx=20)
    btn_2 = tkinter.Button(options, text="LOAD DATA", height=2, width=15,activebackground = '#FFCCCB')
    btn_2.grid(row=1, column=1,pady=10,padx=20)
    btn_3 = tkinter.Button(options, text="SEARCH DATA", height=2, width=15,activebackground = '#FFCCCB')
    btn_3.grid(row=1, column=2,pady=10,padx=20)

    root.mainloop()