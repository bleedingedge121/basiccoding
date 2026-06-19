package patterns;

public class pattern11 {
    public static void main(String[] args) {
        int n = 5;

        for (int i = 1; i <= n; i++) {

            // Print the spaces
            for (int j = 1; j <= i; j++) {
                System.out.print(" ");

            }

            // Print the reverse pattern
            for (int j = i; j <= n; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}
