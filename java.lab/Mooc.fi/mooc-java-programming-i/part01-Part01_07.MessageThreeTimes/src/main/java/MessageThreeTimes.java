
import java.util.Scanner;

public class MessageThreeTimes {

    public static void main(String[] args) {
        // Create the tool for reading, assign it to variable caller "scanner
        Scanner scanner = new Scanner(System.in);

        System.out.println("Write a message:");
        // Read input and put into a variable message

        String message = scanner.nextLine();

        System.out.println(message);
        System.out.println(message);
        System.out.println(message);
    }
}
