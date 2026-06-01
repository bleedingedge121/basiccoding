
import java.util.Scanner;

public class DoubleInput {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // printing
        System.out.println("Give a number:");

        // Reading input and then converting the String input to Integer

        int number = Integer.valueOf(scanner.nextLine());

        // Printing the input number
        System.out.print("You gave the number ");
        System.out.println(number);

    }
}
