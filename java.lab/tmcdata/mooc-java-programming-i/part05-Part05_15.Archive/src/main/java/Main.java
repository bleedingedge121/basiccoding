
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Archive> ArchiveList = new ArrayList<>();

        // Read person information from the user
        while (true) {

            System.out.println("Identifier? (empty will stop)");
            String identifier = scanner.nextLine();
            if (identifier.isEmpty()) {
                break;
            }

            System.out.println("Name? (empty will stop)");
            String name = scanner.nextLine();
            if (name.isEmpty()) {
                break;
            }

            if (!(ArchiveList.contains(new Archive(name, identifier)))) {
                ArchiveList.add(new Archive(name, identifier));
            } else {

            }

        }

        System.out.println("==Items==");
        for (Archive i : ArchiveList) {
            System.out.println(i.toString());
        }

        scanner.close();

    }
}
