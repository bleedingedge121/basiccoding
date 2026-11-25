#include <stdio.h>

// Define the structure for a cricket player
struct CricketPlayer
{
    char name[50];
    char team_name[50];
    float batting_average;
};

// Function to sort players by batting average
void sortPlayers(struct CricketPlayer players[], int n)
{
    struct CricketPlayer temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (players[j].batting_average < players[j + 1].batting_average)
            {
                temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter number of players: ");
    scanf("%d", &n);

    struct CricketPlayer players[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        printf("\nPlayer %d details:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", players[i].name);
        printf("Team: ");
        scanf(" %[^\n]", players[i].team_name);
        printf("Average: ");
        scanf("%f", &players[i].batting_average);
    }

    // Sort players
    sortPlayers(players, n);

    // Output loop
    printf("\nSorted Player List:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s | Team: %s | Average: %.2f\n",
               players[i].name, players[i].team_name, players[i].batting_average);
    }

    return 0;
}
