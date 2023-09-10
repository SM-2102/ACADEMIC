import java.util.Scanner;

import Admission.*;
import Education.*;

class Main_class 
{
    public static void main(String args[])
    {
        int ch,i=0;
        Student_details std = null;
        Library lib = null;
        Assignment assgn = null;
        Examination exam = null;
        Scanner sc=new Scanner(System.in);
        while(true)
        {
            System.out.println("\n1. Print Student details\n2. Print Library details\n3. Print Assignment details\n4. Print Examination details\n5. Exit");
            System.out.print("Enter choice : ");
            ch = Integer.parseInt(sc.nextLine());
            switch(ch)
            {
                case 1:
                    if(std==null)
                        std = new Student_details();
                    std.display();
                    break;
                case 2:
                    if (lib==null)
                        lib = new Library();
                    lib.display();
                    break;
                case 3:
                    if (assgn==null)
                        assgn = new Assignment();
                    assgn.display();
                    break;
                case 4:
                    if (exam==null)
                        exam = new Examination();
                    exam.display();
                    break;
                case 5:
                    sc.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid choice.");
            }
        }
    }
}
