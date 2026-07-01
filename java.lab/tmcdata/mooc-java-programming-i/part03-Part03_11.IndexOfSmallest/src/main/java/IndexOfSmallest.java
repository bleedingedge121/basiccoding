
import java.util.ArrayList;
import java.util.Scanner;

public class IndexOfSmallest {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // implement here a program that reads user input
        // until the user enters 9999

        ArrayList<Integer> list = new ArrayList<>();

        while (true) {
            int input = Integer.valueOf(scanner.nextLine());
            if (input == 9999) {
                break;
            }

            list.add(input);
        }

        // after that, the program prints the smallest number
        // and its index -- the smallest number
        // might appear multiple times

        // int smallestNumber = 9999;
        // int index = 0;

        // for (int i = 0; i < list.size(); i++) {
        // if (smallestNumber > list.get(i)) {
        // smallestNumber = list.get(i);
        // index = i;
        // }
        // }

        // System.out.println("Smallest number: " + smallestNumber);
        // System.out.println("Found at index: " + index);

        int smallestNumber = list.get(0);
        int smallestIndex = 0;
        int currentIndex = 0;

        for (int number : list) {
            if (number < smallestNumber) {
                smallestNumber = number;
                smallestIndex = currentIndex;
            }
            currentIndex++;
        }

        System.out.println("Smallest number: " + smallestNumber);
        System.out.println("Found at index: " + smallestIndex);

    }
}
