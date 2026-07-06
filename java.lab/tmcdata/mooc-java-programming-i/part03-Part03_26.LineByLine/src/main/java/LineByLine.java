
import java.util.Scanner;

public class LineByLine {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNextLine()) {
            String sentence = scanner.nextLine();

            String[] pieces = sentence.split(" ");
            for (String piece : pieces) {
                if (!piece.isEmpty()) { // handles multiple spaces
                    System.out.println(piece);
                }
            }
        }

    }
}
