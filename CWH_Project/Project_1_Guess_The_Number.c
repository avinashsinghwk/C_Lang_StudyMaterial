#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("In this lecture we will be solving a project\n");

    // Question: We will write a program that generates a random number and asks the player to guess it. If the player's guess is higher then the actual number the program displays "Lower number please". Similary if the user guess is too low, the program prints "Higher number please". When user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.

    int random, user, guess = 0;
    srand(time(0));
    random = rand() % 100 + 1;
    // printf("The random number is %d\n", random);
    do
    {
        printf("Enter a number between 1 to 100 : ");
        scanf("%d", &user);
        guess++;
        if (random == user)
        {
            printf("You guessed it right\n");
            printf("You guessed in %d times", guess);
        }
        else if (random > user)
        {
            printf("The correct number is greater than %d\n", user);
        }
        else
        {
            printf("The correct number is less than than %d\n", user);
        }
    } while (random != user);

    return 0;
}