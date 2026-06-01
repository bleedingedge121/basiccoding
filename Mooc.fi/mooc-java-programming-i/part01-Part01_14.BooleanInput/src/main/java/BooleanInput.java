
import java.util.Scanner;

public class BooleanInput {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // printing
        System.out.println("Write something:");

        // Reading input and then converting the String input to Integer

        boolean bol = Boolean.valueOf(scanner.nextLine());

        // Printing the input number
        System.out.print("True or false? ");
        System.out.println(bol);

    }
}
