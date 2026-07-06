
import java.util.ArrayList;
import java.util.Scanner;

public class PersonalDetails {

    public static void main(String[] args) {
        // Declaring Variables
        int yearSum = 0;
        int count = 0;
        int longestNamesSize = 0;
        String longestName = "";
        Scanner scanner = new Scanner(System.in);

        // Loop to take inputs until empty string
        while (true) {
            // Input using scanner

            String input = scanner.nextLine();
            if (input.equals("")) {
                break;
            }

            // Spliting the input at ","

            String[] parts = input.split(",");

            // Logic to check the longest string using string.length()

            if (parts[0].length() > longestNamesSize) {
                longestNamesSize = parts[0].length();
                longestName = parts[0];
            }

            // Calcualting Avg of the year

            int year = Integer.valueOf(parts[1]);
            yearSum = year + yearSum;
            count++;
        }

        // Printing the output
        System.out.println("Longest name: " + longestName);
        System.out.println("Average of the birth years: " + ((double) yearSum / count));

    }
}
