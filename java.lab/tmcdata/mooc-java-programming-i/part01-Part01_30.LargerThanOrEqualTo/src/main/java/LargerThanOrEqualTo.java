
import java.util.Scanner;

public class LargerThanOrEqualTo {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        // variables
        int n1;
        int n2;

        // input
        System.out.println("Give the first number:");
        n1 = Integer.valueOf(scan.nextLine());
        System.out.println("Give the second number:");
        n2 = Integer.valueOf(scan.nextLine());

        // Logic to calcualte greater number
        if (n1 > n2) {
            System.out.println("Greater number is:" + n1);
        } else if (n1 == n2) {
            System.out.println("The numbers are equal!");
        } else {
            System.out.println("Greater number is:" + n2);
        }

        scan.close();

    }
}
