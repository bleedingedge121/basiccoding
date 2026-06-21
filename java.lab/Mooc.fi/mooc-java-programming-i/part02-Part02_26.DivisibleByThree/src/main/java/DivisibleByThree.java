
import java.util.Scanner;

public class DivisibleByThree {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input
        System.out.print("Give the beginning number:");
        int beginning = Integer.valueOf(scanner.nextLine());
        System.out.print("Give the ending number:");
        int end = Integer.valueOf(scanner.nextLine());

        // Calling Method

        divisibleByThreeInRange(beginning, end);

    }

    public static void divisibleByThreeInRange(int beginning, int end) {
        for (int i = beginning; i <= end; i++) {
            if (i % 3 == 0) {
                System.out.println(i);
            }
        }

    }

}
