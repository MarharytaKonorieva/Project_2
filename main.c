#include <stdio.h>
#include <stdlib.h>  /* functions for working with random numbers */
#include <time.h> 
#include <stdbool.h> 



int main()
{
    srand(time(NULL));

    int rock = 1;
    int scissors =  2;
    int paper = 3;

    int player_1 = 0;
    int player_2_Ai = 0;
    bool repeat = false;

    do
    {
        printf("\nWhat do you want to choose?\n");
        printf("1) Rock \n");
        printf("2) Scissors \n");
        printf("3) Paper \n");
        printf("You choose: ");
        scanf_s("%d", &player_1);

        if (player_1 != rock && player_1 != scissors && player_1 != paper)
        {
            printf("You didn't write a correct choice!\n");

        }
        else
        {
            player_2_Ai = (rand() % 3) + 1;
            if (player_2_Ai == rock)
                printf("\nAI chose rock.\n");
            else if (player_2_Ai == scissors)
                printf("\nAI chose scissors.\n");
            else if (player_2_Ai == paper)
                printf("\nAI chose paper.\n");

            if (player_1 == rock && player_2_Ai == scissors)
                printf("\nRock beats scissors. You win! :)\n");
            else if (player_1 == rock && player_2_Ai == paper)
                printf("\nPaper beats rock. You lose! :(\n");
            else if (player_1 == paper && player_2_Ai == scissors)
                printf("\nScissors beat paper. You lose! :(\n");
            else if (player_1 == paper && player_2_Ai == rock)
                printf("\nPaper beats rock. You win! :)\n");
            else if (player_1 == scissors && player_2_Ai == paper)
                printf("\nScissors beat paper. You win! :)\n");
            else if (player_1 == scissors && player_2_Ai == rock)
                printf("\nRock beats scissors. You lose! :(\n");
            else
            {
                printf("\nDraw. Try again! :/\n");
                repeat = true;
            }
        }
    } while (repeat);

    return 0;
}
