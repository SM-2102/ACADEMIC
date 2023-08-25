import java.util.*;

public class composite_magic {
    
    //static integer
    static int d = 0;
    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        int fact;
        int mag;
        int ll;
        int ul;
        int freq = 0;

        //user prompts
        System.out.print("Enter the lower limit: ");
        ll = in.nextInt();
        System.out.print("Enter the upper limit: ");
        ul = in.nextInt();

        //checking whether the inputs are valid
        if ((ll < ul) && (ll > 0)) {
            System.out.println("The composite magic numbers are : ");

            //checking whether the numbers are composite and magic
            for (int i = ll; i <= ul; i ++) {
                fact = composite(i, i / 2);
                mag = magic(i);
                if ((fact == 1) && (mag == 1)) {
                    System.out.println(i);
                    freq ++;
                }
            }

            //printing the frequency of composite and magic numbers
            System.out.println("The frequency is: " + freq);
        }        else {
            System.out.println("Invalid input");
        }
        in.close();
    }

    //checking whether a number is composite
    public static int composite(int num, int count) {
        if (count == 1) {
            return 0;
        }        else {
            if (num % count == 0) {
                return 1;
            }            else {
                return composite(num, count - 1);
            }
        }
    }
    
    //checking whether it is a magic number
    public static int magic(int n) {
        if (n % 9 == 1) {
            return 1;
        }        else {
            return 0;
        }
    }

}