
// // Imprting the scanner tool used for reading user input
import java.util.Scanner;

public class Message {

  public static void main(String[] args) {
    // Create a tool for reading user input and name it scanner
    Scanner scanner = new Scanner(System.in);

    System.out.println("Write a message:");
    // Read the string written by the user, and assign it

    String message = scanner.nextLine();

    // Printing the message variable
    System.out.println(message);
  }
}
