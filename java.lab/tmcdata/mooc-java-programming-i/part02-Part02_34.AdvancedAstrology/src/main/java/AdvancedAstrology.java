
public class AdvancedAstrology {

    public static void printStars(int number) {

        for (int i = 0; i < number; i++) {
            System.out.print("*");
        }
        System.out.println("");
    }

    public static void printSpaces(int number) {

        for (int i = 0; i < number; i++) {
            System.out.print(" ");
        }

        // int i = 0;
        // while (i < number) {
        // System.out.print(" ");
        // i++;
        // }
    }

    public static void printTriangle(int size) {

        for (int i = 1; i <= size; i++) {
            printSpaces(size - i);
            printStars(i);
        }

        // for (int i = 1; i <= size; i++) {

        // // Single inner loop handles columns
        // for (int j = 1; j <= size; j++) {
        // // If column index is less than or equal to (n - row), print space
        // if (j <= size - i) {
        // System.out.print(" ");
        // } else {
        // System.out.print("*");
        // }
        // }
        // System.out.println();
        // }

    }

    public static void christmasTree(int height) {

        // Printing top part

        for (int i = 1; i <= height; i++) {
            printSpaces(height - i);
            printStars(i + (i - 1));
        }

        // Printing Base
        printSpaces(height - 2);
        printStars(3);
        printSpaces(height - 2);
        printStars(3);

        // Printing Base

        // // Print the top part
        // for (int i = 1; i <= height; i++) {

        // // First loop to print leading spaces for alignment
        // for (int j = 1; j <= height - i; j++) {
        // System.out.print(" ");
        // }

        // // Second loop to print the stars
        // for (int j = 1; j <= (2 * i - 1); j++) {
        // System.out.print("*");
        // }

        // System.out.println();
        // }

        // // Print the base
        // for (int i = 0; i < 2; i++) {
        // // Center the trunk relative to the tree width
        // for (int j = 1; j <= height - 2; j++) {
        // System.out.print(" ");
        // }
        // // Print a 3-character wide trunk
        // System.out.println("***");

        // }

    }

    public static void main(String[] args) {
        // The tests are not checking the main, so you can modify it freely.

        printTriangle(5);
        System.out.println("---");
        christmasTree(4);
        System.out.println("---");
        christmasTree(10);
    }
}
