
import java.util.Scanner;

public class SumOfASequenceTheSequel {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Variables

        int firstNumber = 0;
        int lastNumber = 0;
        int sum = 0;

        // Input
        System.out.print("First number? ");
        firstNumber = Integer.valueOf(scanner.nextLine());
        System.out.print("Last number? ");
        lastNumber = Integer.valueOf(scanner.nextLine());

        // Logic
        for (int i = firstNumber; i <= lastNumber; i++) {
            sum = sum + i;
        }

        // int i = firstNumber;
        // while (i <= lastNumber) {
        // sum = sum + i;
        // sum++;
        // }

        // Output

        System.out.println("The sum is: " + sum);

        scanner.close();
    }
}
