
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Scanner;

public class NumbersFromAFile {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Ask for file
        System.out.print("File? ");
        String file = scanner.nextLine();

        // Ask for Lower Bound
        System.out.print("Lower bound? ");
        int lowerBound = Integer.valueOf(scanner.nextLine());

        // Ask for Upper Bound
        System.out.print("Upper bound? ");
        int upperBound = Integer.valueOf(scanner.nextLine());

        // number Array List
        ArrayList<Integer> list = new ArrayList<>();

        // implement reading the file here.

        try (Scanner reader = new Scanner(Paths.get(file))) {

            // we read the file until all lines have been read
            while (reader.hasNextLine()) {
                // we read one line
                int row = Integer.valueOf(reader.nextLine());
                // ading to the Araylist
                list.add(row);
            }

        } catch (Exception e) {
            System.out.println("Reading the file " + file + " failed." + e.getMessage());
        }

        // print the number of numbers in range
        int i = 0;

        for (int n : list) {
            if (n <= upperBound && n >= lowerBound) {
                i++;
            }
        }
        System.out.println("Numbers: " + i);

    }

}
