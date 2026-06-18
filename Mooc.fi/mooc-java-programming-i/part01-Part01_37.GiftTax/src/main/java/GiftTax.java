
import java.util.Scanner;

public class GiftTax {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        // Variables
        double tax;
        int baseline;

        // Input
        System.out.println("Value of the gift?");
        int amt = Integer.valueOf(scan.nextLine());

        // Logic
        // BODMAS

        if (amt < 5000) {
            System.out.println("No tax!");
        }

        else if (amt <= 25000) {
            baseline = 100;
            tax = baseline + (amt - 5000) * 0.08;
            System.out.println("Tax: " + tax);
        }

        else if (amt <= 55000) {
            baseline = 1700;
            tax = baseline + (amt - 25000) * 0.1;
            System.out.println("Tax: " + tax);
        }

        else if (amt <= 200000) {
            baseline = 4700;
            tax = baseline + (amt - 55000) * 0.12;
            System.out.println("Tax: " + tax);
        }

        else if (amt <= 1000000) {
            baseline = 22100;
            tax = baseline + (amt - 200000) * 0.15;
            System.out.println("Tax: " + tax);
        }

        else {
            baseline = 142100;
            tax = baseline + (amt - 1000000) * 0.17;
            System.out.println("Tax: " + tax);
        }

        scan.close();
    }
}
