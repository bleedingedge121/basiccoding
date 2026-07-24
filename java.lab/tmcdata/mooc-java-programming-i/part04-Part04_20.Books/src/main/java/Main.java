import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        ArrayList<Book> books = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        // Read person information from the user
        while (true) {
            System.out.print("Title: ");
            String name = scanner.nextLine();
            if (name.isEmpty()) {
                break;
            }
            System.out.print("Pages: ");
            int pages = Integer.valueOf(scanner.nextLine());
            System.out.print("Publication year: ");
            String pubYear = scanner.nextLine();

            books.add(new Book(name, pages, pubYear));

        }
        // System.out.print("What information will be printed? ");
        // String data = scanner.nextLine();

        // if (data.equals("everything")) {
        // for (Book book : books) {
        // System.out.println(book);
        // }

        // } else if (data.equals("name")) {
        // for (Book book : books) {
        // System.out.println(book.getTitle());
        // }

        // }

        System.out.println("");

        System.out.print("What information will be printed? ");
        String toBePrinted = scanner.nextLine();

        int index = 0;
        while (index < books.size()) {
            Book book = books.get(index);

            if (toBePrinted.equals("everything")) {
                System.out.println(book);
            } else if (toBePrinted.equals("name")) {
                System.out.println(book.getTitle());
            }

            index++;
        }

    }
}
