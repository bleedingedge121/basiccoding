
import java.util.Scanner;

public class CountingToHundred {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Variables
        int n = Integer.valueOf(scanner.nextLine());

        // Using while
        while (n <= 100) {
            System.out.println(n);
            n++;
        }

        // Using for
        // for (int i = n; i <= 100; i++) {
        // System.out.println(i);
        // }

        scanner.close();

    }
}
