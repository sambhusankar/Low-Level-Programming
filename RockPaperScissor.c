#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char opts[3][7] = {"Rock", "Paper", "Scissor"};
    srand(time(NULL));

    while (1) {
        char comp_choice[7];
        int item = rand() % 3;
        
        strcpy(comp_choice, opts[item]);
        char user_choice[7];
        
        printf("Computer's Choice: %s\n", comp_choice);
        printf("Enter your choice (Rock, Paper, Scissor): ");
        scanf("%s", user_choice);

        // Ensure user input is valid (one of Rock, Paper, or Scissor)
        if (strcasecmp(user_choice, "Rock") != 0 &&
            strcasecmp(user_choice, "Paper") != 0 &&
            strcasecmp(user_choice, "Scissor") != 0) {
            printf("Invalid input! Please enter Rock, Paper, or Scissor.\n");
            continue;  // Ask for input again
        }

        printf("Your Choice: %s\n", user_choice);

        // Check for draw
        if (strcasecmp(comp_choice, user_choice) == 0) {
            printf("Match draw...\n");
        }
        // Check if the user loses
        else if ((strcasecmp(comp_choice, "Scissor") == 0 && strcasecmp(user_choice, "Paper") == 0) ||
                 (strcasecmp(comp_choice, "Rock") == 0 && strcasecmp(user_choice, "Scissor") == 0) ||
                 (strcasecmp(comp_choice, "Paper") == 0 && strcasecmp(user_choice, "Rock") == 0)) {
            printf("You lose this game.\n");
        }
        // If the user doesn't lose or draw, they win
        else {
            printf("You win the game!\n");
        }

        break;  // End the game after one round
    }

    return 0;
}
