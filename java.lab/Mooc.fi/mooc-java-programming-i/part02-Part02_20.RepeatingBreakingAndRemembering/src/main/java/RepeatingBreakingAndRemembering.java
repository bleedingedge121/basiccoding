
import java.util.Scanner;

public class RepeatingBreakingAndRemembering {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Variables
        int a = 0;
        int sum = 0;
        int n = 0;
        int even = 0;

        // Main loop

        while (true) {
            System.out.println("Give numbers:");
            a = Integer.valueOf(scanner.nextLine());

            if (a == -1) {
                System.out.println("Thx! Bye!");
                break;
            }
            if (a % 2 == 0) {
                even++;
            }

            sum = sum + a;
            n++;
        }

        // Output
        System.out.println("Sum: " + sum);
        System.out.println("Numbers: " + n);
        System.out.println("Average: " + (double) sum / n);
        System.out.println("Even: " + even);
        System.out.println("Odd: " + (n - even));
    }

}
