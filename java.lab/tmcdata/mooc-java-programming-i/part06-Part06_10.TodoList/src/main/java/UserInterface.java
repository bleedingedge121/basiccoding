import java.util.Scanner;

public class UserInterface {

    private TodoList list;
    private Scanner scanner;

    public UserInterface(TodoList list, Scanner scanner) {
        this.list = list;
        this.scanner = scanner;
    }

    public void start() {
        while (true) {
            System.out.print("Command: ");
            String input = scanner.nextLine();
            if (input.equals("stop")) {
                break;
            }

            processCommand(input);
            System.out.println("");
        }
    }

    public void processCommand(String command) {
        if (command.equals("add")) {
            add();
        } else if (command.equals("list")) {
            list();
        } else if (command.equals("remove")) {
            remove();
        } else {
            System.out.println("Unknown command");
        }
    }

    public void add() {
        System.out.print("To add: ");
        String word = this.scanner.nextLine();
        this.list.add(word);
    }

    public void list() {
        this.list.print();
    }

    public void remove() {
        System.out.print("Which one is removed? ");
        int number = Integer.valueOf(this.scanner.nextLine());
        this.list.remove(number);
    }

}
