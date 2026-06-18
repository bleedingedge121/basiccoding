
import java.util.Scanner;

public class LeapYear {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        // Input
        System.out.print("Give a year:");
        int year = Integer.valueOf(scan.nextLine());

        // Checking if its a leap year
        /*
         * Thet thing is always write the more important/constraint
         * statement/condition first
         * then write the exception example
         * else if (year % 4 == 0 && year % 100 != 0)
         */

        // Modal solution 1 liner think better

        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            System.out.println("The year is a leap year.");
        } else {
            System.out.println("The year is not a leap year.");
        }

        // My solution

        // if (year % 400 == 0 && year % 100 == 0) {
        // System.out.println("The year is a leap year.");
        // } else if (year % 4 == 0 && year % 100 != 0) {
        // System.out.println("The year is a leap year.");
        // } else {
        // System.out.println("The year is not a leap year.");
        // }

    }
}
