
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Scanner;

public class SportStatistics {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        // initialising Variables
        int games = 0;
        int win = 0;
        int loss = 0;

        // Ask for file
        System.out.println("File? ");
        String file = scan.nextLine();

        // Ask for team
        System.out.println("Team: ");
        String team = scan.nextLine();

        // implement reading the file here.

        try (Scanner reader = new Scanner(Paths.get(file))) {

            // we read the file until all lines have been read
            while (reader.hasNextLine()) {

                String line = reader.nextLine();

                String[] parts = line.split(",");
                String homeTeam = parts[0];
                String visitingTeam = parts[1];
                int htPoints = Integer.valueOf(parts[2]);
                int vtPoints = Integer.valueOf(parts[3]);

                // if (homeTeam.equals(team) | visitingTeam.equals(team)) {
                // games++;

                // }

                if (homeTeam.equals(team)) {
                    games++;

                    if (htPoints > vtPoints) {
                        win++;
                    } else {
                        loss++;
                    }

                } else if (visitingTeam.equals(team)) {
                    games++;

                    if (vtPoints > htPoints) {
                        win++;
                    } else {
                        loss++;
                    }
                }

            }
            System.out.println("Games: " + games);
            System.out.println("Wins: " + win);
            System.out.println("Losses: " + loss);

        } catch (Exception e) {
            System.out.println("Reading the file " + file + " failed." + e.getMessage());
        }

    }

}
