
import java.util.Scanner;

public class Factorial {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Variables

        int n = 0;
        int factorial = 1;

        // Input
        System.out.print("Give a number: ");
        n = Integer.valueOf(scanner.nextLine());

        // Logic

        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        // int i = 1;
        // while (i <= n) {
        // factorial = factorial * i;
        // i++;
        // }

        // Output

        System.out.println("Factorial: " + factorial);

        scanner.close();

    }
}
