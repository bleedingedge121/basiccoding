
import java.util.Scanner;

public class NumberOfNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = 0;

        while (true) {
            System.out.println("Give a number:");
            int a = Integer.valueOf(scanner.nextLine());

            if (a == 0) {
                break;

            }
            // else { this else is not needed as it breaks as soon as a zero is inputed
            // n++;
            // }

            n++;
        }

        System.out.println("Number of numbers: " + n);
        scanner.close();

    }
}
