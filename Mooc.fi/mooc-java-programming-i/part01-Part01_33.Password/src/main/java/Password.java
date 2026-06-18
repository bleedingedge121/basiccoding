
import java.util.Scanner;

public class Password {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        // Input
        System.out.println("Password?");
        String pass = scan.nextLine();

        // Checking if the password is correct using string.equals()
        if (pass.equals("Caput Draconis")) {
            System.out.println("Welcome!");
        } else {
            System.out.println("Off with you!");
        }

        scan.close();

    }
}
