
import java.util.Scanner;

public class DifferentTypesOfInput {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        // Variable, Input and Printing to ask
        System.out.println("Give a string:");
        String str = scan.nextLine();

        System.out.println("Give an integer:");
        int numb = Integer.valueOf(scan.nextLine());

        System.out.println("Give a double:");
        double dob = Double.valueOf(scan.nextLine());

        System.out.println("Give a boolean:");
        boolean bol = Boolean.valueOf(scan.nextLine());

        // Printing output

        System.out.println("You gave the string " + str);
        System.out.println("You gave the integer " + numb);
        System.out.println("You gave the double " + dob);
        System.out.println("You gave the boolean " + bol);
    }
}
