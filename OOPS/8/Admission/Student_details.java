package Admission;
import java.util.Scanner;

public class Student_details
{
    String student_name, dept, dob;
    public Student_details()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter student name : ");
        student_name = sc.nextLine();
        System.out.print("Enter department : ");
        dept=sc.nextLine();
        System.out.print("Enter date of birth (DD-MM-YYYY) : ");
        dob = sc.nextLine();
    }
    public void display()
    {
        System.out.printf("\nStudent Name : %s\nDepartment : %s\nDate of Birth : %s\n",student_name,dept,dob);
    }
}