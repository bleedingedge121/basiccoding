package patterns;

public class pattern10 {

    // Palindrome Triangle Pattern
    public static void main(String[] args) {

        int n = 5;

        for (int i = 0; i < n; i++) {

            // print the spaces
            for (int j = 0; j < 2 * (n - i); j++) {
                System.out.print(" ");

            }

            // print the first section (left one)
            for (int j = i; j >= 1; j--) {
                System.out.print(j + " ");
            }

            // print the second section (right one)
            for (int j = 2; j <= i; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }

    }
}
