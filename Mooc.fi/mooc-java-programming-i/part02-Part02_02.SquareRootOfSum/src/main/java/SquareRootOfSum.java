
import java.util.Scanner;

public class SquareRootOfSum {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input
        double a = Double.valueOf(scanner.nextLine());
        double b = Double.valueOf(scanner.nextLine());

        double squareRoot = Math.sqrt(a + b);
        System.out.println(squareRoot);

        scanner.close();
    }
}
