
import java.util.Scanner;

public class FromWhereToWhere {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input
        System.out.print("Where to? ");
        int end = Integer.valueOf(scanner.nextLine());
        System.out.print("Where from? ");
        int start = Integer.valueOf(scanner.nextLine());

        Logic
        for (int i = start; i <= end; i++) {
        System.out.println(i);
        }

        // int b = start;
        // while (b <= end) {
        //     System.out.println(b);
        //     b++;
        // }
    }
}
