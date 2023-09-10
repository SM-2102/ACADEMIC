package Education;
import java.util.Scanner;

public class Assignment
{
    int assignment_num,marks;
    String assignment_sub;
    public Assignment()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter assignment number : ");
        assignment_num = Integer.parseInt(sc.nextLine());
        System.out.print("Enter assignment subject : ");
        assignment_sub = sc.nextLine();
        System.out.print("Enter marks on assignment : ");
        marks = Integer.parseInt(sc.nextLine());
    }
    public void display()
    {
        System.out.printf("\nAssignment Number : %d\nAssignment Subject : %s\nMarks on Assignment : %d\n",assignment_num,assignment_sub,marks);
    }
}