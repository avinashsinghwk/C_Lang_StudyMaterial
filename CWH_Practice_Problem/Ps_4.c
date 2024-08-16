#include <stdio.h>
int main()
{
    printf("In this lecture we will be solving practice problem 4");

    // Question 1. Write a program to print multiplication table of a number n
    // int table;
    // printf("\nEnter a number : ");
    // scanf("%d", &table);
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d X %d = %d\n", table, i, table * i);
    // }

    // Question 2. Write a program to print multiplication table in reverse
    // int table;
    // printf("\nEnter a number : ");
    // scanf("%d", &table);
    // for (int i = 10; i >= 1; i--)
    // {
    //     printf("%d X %d = %d\n", table, i, table * i);
    // }

    // Question 3. A do while is executed at least how many times?
    // A do while loop is executed at least one time because first it execute then it check the condition that's why if the condition is false it will execute at least once

    // Question 4. What can be done through one type of loop can be done through other types of loop, true or false
    // True, basically what we can do with one type of loop, can also be done with other loops

    // Question 5. Wirte a program to sum first 10 natural number using while loop
    // int num, i = 1, sum = 0;
    // printf("\nEnter a number : ");
    // scanf("%d", &num);
    // while (i <= num)
    // {
    //     sum += i;
    //     i++;
    // }
    // printf("The sum of first %d natural number = %d",num,sum);

    // Question 6. Implement 5 using for loop or do while loop
    // int num, sum = 0;
    // printf("\nEnter a number : ");
    // scanf("%d", &num);
    // for (int i = 1; i <= num; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("The sum of first %d natural number = %d", num, sum);

    // int num, sum = 0, i = 1;
    // printf("\nEnter a number : ");
    // scanf("%d", &num);
    // do
    // {
    //     sum = sum + i;
    //     i++;
    // } while (i <= num);
    // printf("The sum of first %d natural number = %d", num, sum);

    // Question 7. Write a program to calculate the sum of the numbers occuring in the multiplication table of 8
    // int sum = 0, i;
    // for (i = 1; i <= 10; i++)
    // {
    //     sum = sum + (8 * i);
    // }
    // printf("\nThe sum of the multiplication table of 8 is %d", sum);

    // Question 8. Write a program to calculate factorial of a given number using for loop
    // int factorial, multi = 1;
    // printf("\nEnter a number : ");
    // scanf("%d", &factorial);
    // for (int i = factorial; i >= 1; i--)
    // {
    //     multi = multi * i;
    // }
    // printf("The factorial of %d is %d", factorial, multi);

    // Question 9. Repeat 8 using while loop
    // int factorial, multi = 1;
    // printf("\nEnter a number : ");
    // scanf("%d", &factorial);
    // int i = factorial;
    // while (i >= 1)
    // {
    //     multi = multi * i;
    //     i--;
    // }
    // printf("The factorial of %d is %d", factorial, multi);

    // Question 10. Write a program to check whether a number is prime or not using loops
    // int prime, j = 0;
    // printf("\nEnter a number greater than 1: ");
    // scanf("%d", &prime);
    // for (int i = 2; i < prime; i++)
    // {
    //     if (prime % i == 0)
    //     {
    //         j = 1;
    //     }
    // }
    // if (j == 1)
    // {
    //     printf("No, %d is not a prime number", prime);
    // }
    // else
    // {
    //     printf("Yes, %d is a prime number", prime);
    // }

    // Question 11. Implement 10 using other types of loops
    // int prime, i = 2, j = 0;
    // printf("\nEnter a number greater than 1: ");
    // scanf("%d", &prime);
    // while (i < prime)
    // {
    //     if (prime % i == 0)
    //     {
    //         j = 1;
    //     }
    //     i++;
    // }
    // if (j == 1)
    // {
    //     printf("No, %d is not a prime number", prime);
    // }
    // else
    // {
    //     printf("Yes, %d is a prime number", prime);
    // }

    // int prime, i = 2, j = 0;
    // printf("\nEnter a number greater than 1 : ");
    // scanf("%d", &prime);
    // do
    // {
    //     if (prime % i == 0)
    //     {
    //         j = 1;
    //     }
    //     i++;
    // } while (i < prime);
    // if (j == 1)
    // {
    //     printf("No, %d is not a prime number", prime);
    // }
    // else
    // {
    //     printf("Yes, %d is a prime number", prime);
    // }

    return 0;
}