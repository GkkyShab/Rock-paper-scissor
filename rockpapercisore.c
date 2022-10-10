#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    char name[10];
    char a;
    int var, i = 0, choice;
    int P_Score = 0, C_Score = 0;
    printf("Enter Your Name : ");
    scanf("%s", &name);
    printf("\n\n\t\t%s WELCOME TO OUR ROCK, PAPER, SCISSOR GAME!\n\n", name);
    getchar();
    printf("To start the game Press Y\n");
    scanf("%c",&a);
    if ((a == 'Y') || (a == 'y'))
    {
        while (i < 3)
        {
            printf("\nPress--> 0 for Rock\nPress--> 1 for Scissor\nPress--> 2 for Paper\n");
            scanf("%d", &choice);
            if (choice == 0)
            {
                printf("Your Choice is 0 and That is Rock\n");
            }
            else if (choice == 1)
            {
                printf("Your Choice is 1 and That is Scissor\n");
            }
            else if (choice == 2)
            {
                printf("Your Choice is 2 and That is Paper\n");
            }

            srand(time(NULL));
            var = rand() % 3;
            if (var == 0)
            {
                printf("Computer Choice is 0 and That is Rock\n");
            }
            else if (var == 1)
            {
                printf("Computer Choice is 1 and That is Scissor\n");
            }
            else if (var == 2)
            {
                printf("Computer Choice is 2 and That is Paper\n");
            }
            switch (choice)
            {
            case 0:
                if (choice == 0 && var == 0)
                {
                    printf("\nIts a Tie!\n");
                    P_Score++;
                    C_Score++;
                }
                else if (choice == 0 && var == 1)
                {
                    printf("\n%s Wins!\n", name);
                    P_Score++;
                }
                if (choice == 0 && var == 2)
                {
                    printf("\nComputer Wins!\n");
                    C_Score++;
                }
                break;
            case 1:
                if (choice == 1 && var == 1)
                {
                    printf("\nIts a Tie!\n");
                    P_Score++;
                    C_Score++;
                }
                else if (choice == 1 && var == 0)
                {
                    printf("\nComputer Wins!\n");
                    C_Score++;
                }
                if (choice == 1 && var == 2)
                {
                    printf("\n%s Wins!\n", name);
                    P_Score++;
                }
                break;
            case 2:
                if (choice == 2 && var == 2)
                {
                    printf("\nIts a Tie!\n");
                    P_Score++;
                    C_Score++;
                }
                else if (choice == 2 && var == 0)
                {
                    printf("\n%s Wins!\n", name);
                    P_Score++;
                }
                if (choice == 2 && var == 1)
                {
                    printf("\nComputer Wins!\n");
                    C_Score++;
                }
                break;

            default:
                printf("\nEnter a Valid Number!!!\n");
                break;
            }
            i = i + 1;
        }
    }
    else
    {
        printf("You have Not choosen a valid character to start");
    }
    if (P_Score > C_Score)
    {
        printf("\n\nCONGRATULATIONS !! %s Win's\n", name);
        printf("\t%s Score is %d\t\tComputer's Score is %d", name, P_Score, C_Score);
    }
    else if (P_Score < C_Score)
    {
        printf("\n\nYou Loss !! computer Win's\n");
        printf("\t%s Score is %d\t\tComputer's Score is %d", name, P_Score, C_Score);
    }
    else if (P_Score == C_Score)
    {
        printf("\n\nOOPS!!\tITS A TIE!!\n");
        printf("\t%s Score is %d\t\tComputer's Score is %d", name, P_Score, C_Score);
    }

    return 0;
}