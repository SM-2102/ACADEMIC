package Education;
import java.util.Scanner;

public class Examination
{
    int marks;
    String subject;
    public Examination()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter examination subject : ");
        subject = sc.nextLine();
        System.out.print("Enter marks : ");
        marks = Integer.parseInt(sc.nextLine());
    }
    public void display()
    {
        System.out.printf("\nExamination Subject : %s\nMarks : %d\n",subject,marks);
    }
}