package patterns;

public class Pattern8 {
    public static void main(String[] args) {

        int n = 5;

        for (int i = 1; i <= n; i++) {

            // Single inner loop handles columns
            for (int j = 1; j <= n; j++) {
                // If column index is less than or equal to (n - row), print space
                if (j <= n - i) {
                    System.out.print(" ");
                } else {
                    System.out.print("*" + " ");
                }
            }
            System.out.println();
        }

    }
}
