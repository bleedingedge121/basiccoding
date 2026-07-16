
import java.util.Scanner;

public class MainProgram {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Statistics statistics = new Statistics();
        Statistics evenNumberStatstics = new Statistics();
        Statistics oddNumberStatistics = new Statistics();

        int n = 0;

        System.out.println("Enter numbers:");
        while (true) {
            n = Integer.valueOf(scanner.nextLine());
            if (n == -1) {
                break;
            }
            if (n % 2 == 0) {
                evenNumberStatstics.addNumber(n);
            }
            if (n % 2 != 0) {
                oddNumberStatistics.addNumber(n);
            }
            statistics.addNumber(n);
        }

        System.out.println("Sum: " + statistics.sum());
        System.out.println("Sum of even numbers: " + evenNumberStatstics.sum());
        System.out.println("Sum of odd numbers: " + oddNumberStatistics.sum());
    }
}
