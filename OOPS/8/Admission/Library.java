package Admission;
import java.util.Scanner;

public class Library
{
    String book_name, issue_date, return_date;
    public Library()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter book name : ");
        book_name = sc.nextLine();
        System.out.print("Enter issue date (DD-MM-YYYY) : ");
        issue_date = sc.nextLine();
        System.out.print("Enter return date (DD-MM-YYYY) : ");
        return_date = sc.nextLine();
    }
    public void display()
    {
        System.out.printf("\nBook Name : %s\nIssue Date : %s\nReturn Date : %s\n",book_name,issue_date,return_date);
    }
}