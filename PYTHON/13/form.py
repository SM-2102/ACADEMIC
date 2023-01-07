# data entry and load data

import tkinter
import os
import openpyxl
from tkcalendar import Calendar

def enter_data():
    accepted = accept_var.get()
    
    if accepted=="Accepted":
        firstname = first_name_entry.get()
        lastname = last_name_entry.get()
        
        if firstname and lastname:
            age = age_spinbox.get()
            
            # Course info
            registration_status = reg_status_var.get()
            numcourses = numcourses_spinbox.get()
            numsemesters = numsemesters_spinbox.get()
            
            print("First name: ", firstname, "Last name: ", lastname)
            print("# Courses: ", numcourses, "# Semesters: ", numsemesters)
            print("Registration status", registration_status)
            print("------------------------------------------")
            
            filepath = "D:\data.xlsx"
            
            if not os.path.exists(filepath):
                workbook = openpyxl.Workbook()
                sheet = workbook.active
                heading = ["First Name", "Last Name", "Title", "Age", "Nationality",
                           "# Courses", "# Semesters", "Registration status"]
                sheet.append(heading)
                workbook.save(filepath)
            workbook = openpyxl.load_workbook(filepath)
            sheet = workbook.active
            sheet.append([firstname, lastname, age, numcourses,
                          numsemesters, registration_status])
            workbook.save(filepath)
                
        else:
            tkinter.messagebox.showwarning(title="Error", message="First name and last name are required.")
    else:
        tkinter.messagebox.showwarning(title= "Error", message="You have not accepted the terms")

window = tkinter.Tk()
window.title("Data Entry Form")

frame = tkinter.Frame(window)
frame.pack()

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

gender_label = tkinter.Label(pers_info, text="Gender")
gender_label.grid(row=2, column=1)
radiobutton1 = tkinter.Radiobutton(pers_info, text="Male", value=1)
radiobutton1.grid(row=3, column=1)
radiobutton2 = tkinter.Radiobutton(pers_info, text="Female", value=2)
radiobutton2.grid(row=4, column=1)
radiobutton3 = tkinter.Radiobutton(pers_info, text="Others", value=3)
radiobutton3.grid(row=5, column=1)

contactno_label = tkinter.Label(pers_info, text="Contact Number")
contactno_label.grid(row=4, column=0)
contactno_entry = tkinter.Entry(pers_info)
contactno_entry.grid(row=5, column=0)

contactno_label = tkinter.Label(pers_info, text="Date of Birth")
contactno_label.grid(row=2, column=2)
cal = Calendar(root, selectmode = 'day',
               year = 2020, month = 5,
               day = 22)
 
cal.pack(pady = 20)
 
def grad_date():
    date.config(text = "Selected Date is: " + cal.get_date())
 
# Add Button and Label
Button(root, text = "Get Date",
       command = grad_date).pack(pady = 20)
 
date = Label(root, text = "")
date.pack(pady = 20)




for widget in pers_info.winfo_children():
    widget.grid_configure(padx=10, pady=5)

courses_frame = tkinter.LabelFrame(frame)
courses_frame.grid(row=1, column=0, sticky="news", padx=20, pady=10)

registered_label = tkinter.Label(courses_frame, text="Registration Status")

reg_status_var = tkinter.StringVar(value="Not Registered")
registered_check = tkinter.Checkbutton(courses_frame, text="Currently Registered",
                                       variable=reg_status_var, onvalue="Registered", offvalue="Not registered")

registered_label.grid(row=0, column=0)
registered_check.grid(row=1, column=0)

numcourses_label = tkinter.Label(courses_frame, text= "# Completed Courses")
numcourses_spinbox = tkinter.Spinbox(courses_frame, from_=0, to='infinity')
numcourses_label.grid(row=0, column=1)
numcourses_spinbox.grid(row=1, column=1)

numsemesters_label = tkinter.Label(courses_frame, text="# Semesters")
numsemesters_spinbox = tkinter.Spinbox(courses_frame, from_=0, to="infinity")
numsemesters_label.grid(row=0, column=2)
numsemesters_spinbox.grid(row=1, column=2)

for widget in courses_frame.winfo_children():
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
