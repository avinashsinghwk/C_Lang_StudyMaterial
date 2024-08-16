#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("Snake Water Gun\n");
    printf("Type 1 for Snake\nType 2 for Water\nType 3 for Gun\n");
    int random, user, userCount = 0, compCount = 0;
    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        random = rand() % 3 + 1;
        printf("Enter Your Choice : ");
        scanf("%d", &user);
        if (user == 1)
        {
            printf("You Choose Snake\n");
        }
        else if (user == 2)
        {
            printf("You Choose Water\n");
        }
        else if (user == 3)
        {
            printf("You Choose Gun\n");
        }
        else
        {
            printf("Invalid Choice\n");
            continue;
        }

        if (random == 1)
        {
            printf("Computer Choose Snake\n");
        }
        else if (random == 2)
        {
            printf("Computer Choose Water\n");
        }
        else
        {
            printf("Computer Choose Gun\n");
        }

        if (user == 1 && random == 2 || user == 2 && random == 3 || user == 3 && random == 1)
        {
            printf("You Won\n");
            userCount++;
        }
        else if (user == random)
        {
            printf("Draw\n");
        }
        else
        {
            printf("Computer Won\n");
            compCount++;
        }
    }

    if (userCount > compCount)
    {
        printf("\n\nCongratulation! You won the game\n");
        printf("Run the program to play again");
    }
    else if (userCount == compCount)
    {
        printf("\n\nMatch Draw\n");
        printf("Run the program to play again");
    }
    else
    {
        printf("\n\nSorry! You lose the game\n");
        printf("Run the program to play again");
    }

    return 0;
}