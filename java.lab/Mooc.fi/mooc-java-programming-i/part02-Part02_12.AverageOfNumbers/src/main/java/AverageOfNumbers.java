
import java.util.Scanner;

public class AverageOfNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Variables
        int a = 0;
        int sum = 0;
        int n = 0;

        // Logic using while and if
        while (true) {
            System.out.println("Give a number:");
            a = Integer.valueOf(scanner.nextLine());

            if (a == 0) {
                break;
            }

            sum = sum + a;
            n++;

        }

        System.out.println("Average of the numbers: " + (double) sum / n);

        scanner.close();

    }
}
