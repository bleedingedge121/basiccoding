
import java.util.Scanner;

public class CheckingTheAge {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        // Input
        System.out.println("How old are you?");
        int age = Integer.valueOf(scan.nextLine());

        // Logic
        if (age >= 0 && age <= 120) {
            System.out.println("OK");
        } else {
            System.out.println("Impossible!");
        }

        scan.close();
    }
}
