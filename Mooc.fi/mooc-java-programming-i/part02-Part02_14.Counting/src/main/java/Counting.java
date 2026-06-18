
import java.util.Scanner;

public class Counting {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = Integer.valueOf(scanner.nextLine());

        for (int i = 0; i <= n; i++) {
            System.out.println(i);
        }
        scanner.close();

        // Using while loop
        // int highest = Integer.valueOf(scanner.nextLine());
        // int printing = 0;
        // while (printing <= highest) {
        // System.out.println(printing);
        // printing++;
        // }
    }
}
