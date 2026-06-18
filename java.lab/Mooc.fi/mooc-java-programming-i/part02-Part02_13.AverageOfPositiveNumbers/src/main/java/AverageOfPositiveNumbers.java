
import java.util.Scanner;

public class AverageOfPositiveNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Variables
        int a = 0;
        int positiveSum = 0;
        int nPositive = 0;

        // Logic using while and if
        while (true) {
            System.out.println("Give a number:");
            a = Integer.valueOf(scanner.nextLine());

            if (a == 0) {
                break;
            }

            if (a > 0) {
                positiveSum = positiveSum + a;
                nPositive++;
            }

        }
        if (nPositive > 0) {
            System.out.println((double) positiveSum / nPositive);
        } else {
            System.out.println("Cannot calculate the average");
        }

        scanner.close();

    }
}
