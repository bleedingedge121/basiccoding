package patterns;

public class Pattern4 {
    public static void main(String[] args) {
        // Left Half Triangle

        int n = 5;

        // for (int i = n; i > 0; i--) {

        // // Loop for printing spaces
        // for (int j = 0; j < i - 1; j++) {
        // System.out.print(" ");
        // }

        // for (int j = 0; j <= n - i; j++) {
        // System.out.print("*");
        // }

        // System.out.println();
        // }

        // Using If (B)

        for (int i = 1; i <= n; i++) {

            // Single inner loop handles columns
            for (int j = 1; j <= n; j++) {
                // If column index is less than or equal to (n - row), print space
                if (j <= n - i) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }
            System.out.println();
        }

    }
}
