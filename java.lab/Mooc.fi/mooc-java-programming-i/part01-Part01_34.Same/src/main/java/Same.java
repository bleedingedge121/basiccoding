
import java.util.Scanner;

public class Same {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        // input
        System.out.println("Enter the first string:");
        String f = scan.nextLine();
        System.out.println("Enter the second string:");
        String s = scan.nextLine();

        // Logic

        if (f.equals(s)) {
            System.out.println("Same");
        } else {
            System.out.println("Different");
        }

    }
}
