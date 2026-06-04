
import java.util.Scanner;

public class AdditionFormula {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Input

    System.out.println("Give the first number:");
    int first = Integer.valueOf(scanner.nextLine());
    System.out.println("Give the second number:");
    int second = Integer.valueOf(scanner.nextLine());

    // Sum

    System.out.println(first + " + " + second + " = " + (first + second));

  }
}
