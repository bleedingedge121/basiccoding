
import java.util.ArrayList;
import java.util.Scanner;

public class PersonalInformationCollection {

    public static void main(String[] args) {
        // implement here your program that uses the PersonalInformation class

        ArrayList<PersonalInformation> infoCollection = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        // Read person information from the user
        while (true) {
            String firstName = scanner.nextLine();

            if (firstName.isEmpty()) {
                break;
            }

            String lastName = scanner.nextLine();
            String identificationNumber = scanner.nextLine();

            infoCollection.add(new PersonalInformation(firstName, lastName, identificationNumber));
        }

        // we do not use new because we are not creating a new object. We are only
        // creating a reference variable (program) that temporarily points to each
        // existing TelevisionProgram object inside the programs ArrayList.
        // "Take each TelevisionProgram object from the list, one at a time, and store
        // its reference in the variable called program."

        for (PersonalInformation person : infoCollection) {
            System.out.println(person.getFirstName() + " " + person.getLastName());
        }

    }
}
