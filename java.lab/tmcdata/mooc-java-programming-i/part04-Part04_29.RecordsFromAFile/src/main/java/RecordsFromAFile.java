
import java.nio.file.Paths;
import java.util.Scanner;

public class RecordsFromAFile {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Ask for file
        System.out.println("Name of the file: ");
        String file = scanner.nextLine();

        // implement reading the file here.

        try (Scanner reader = new Scanner(Paths.get(file))) {

            // we read the file until all lines have been read
            while (reader.hasNextLine()) {

                String line = reader.nextLine();

                String[] parts = line.split(",");
                String name = parts[0];
                int age = Integer.valueOf(parts[1]);

                System.out.println(name + ", age: " + age + " years");

            }

        } catch (Exception e) {
            System.out.println("Reading the file " + file + " failed." + e.getMessage());
        }

    }
}
