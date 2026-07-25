
import java.util.Scanner;

public class Conversation {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Printing greating
        System.out.println("Greetings! How are you doing?");
        // Reply inputG
        String reply = scanner.nextLine();
        // Printing second greeting
        System.out.println("Oh, how interesting. Tell me more!");
        String reply2 = scanner.nextLine();
        // Printing third greeting
        System.out.println("Thanks for sharing!");
    }
}
