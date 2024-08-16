#include <stdio.h>
#include <limits.h>
int main()
{
    printf("In this code i am going to solve Exercise 5 i.e Loop Control Instruction\n");

    // (a) Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.
    // int hour_worked, hour_extra, i = 1, money;
    // while (i <= 10)
    // {
    //     printf("Enter the hour worked by employee %d : ", i);
    //     scanf("%d", &hour_worked);
    //     if (hour_worked > 40)
    //     {
    //         hour_extra = hour_worked - 40;
    //         money = 12 * hour_extra;
    //         printf("The total money the employee %d has given = %d Rs.\n", i, money);
    //     }
    //     else
    //     {
    //         printf("Over time kiya haiye na hai tab paise kahe ka\n");
    //     }
    //     i++;
    // }

    // (b) Write a program to find the factorial value of any number entered through the keyboard.
    // int num, multi = 1, i = 1;
    // printf("Enter a number : ");
    // scanf("%d", &num);
    // if (num == 0)
    // {
    //     printf("0! = 1\n");
    // }
    // else{
    // while (i <= num)
    // {
    //     multi *= i;
    //     i++;
    // }
    // printf("%d! = %d", num, multi);
    // }

    // (c) Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
    // int a, b, i = 1, mul = 1;
    // printf("Enter two number : \n");
    // scanf("%d %d", &a, &b);
    // if (b == 0)
    // {
    //     printf("The value of %d^%d = 1\n", a, b);
    // }
    // else
    // {
    //     while (i <= b)
    //     {
    //         mul = mul * a;
    //         i++;
    //     }
    //     printf("The value of %d^%d = %d\n", a, b, mul);
    // }

    // (d) Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.
    // int i = 0;
    // char c;
    // printf("ASCII-value \t Character\n");
    // while (i <= 255)
    // {
    //     c = i;
    //     printf("%d \t\t %c\n ", i, c);
    //     i++;
    // }

    // (e) Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).
    // int i = 1, remain, add, num;
    // while (i <= 500)
    // {
    //     add = 0;
    //     num = i;
    //     while (num != 0)
    //     {
    //         remain = num % 10;
    //         add = add + (remain * remain * remain);
    //         num = num / 10;
    //     }
    //     num = i;
    //     if (add == num)
    //     {
    //         printf("%d is a Armstring\n", num);
    //     }
    //     i++;
    // }

    // (f) Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows: - There are 21 matchsticks. - The computer asks the player to pick 1, 2, 3, or 4 matchsticks. - After the person picks, the computer does its picking. - Whoever is forced to pick up the last matchstick loses the game.
    // int pick, comp, rem = 21;
    // while (rem >= 1)
    // {
    //     printf("Choose Matchsticks (only in 1, 2, 3 or 4) : ");
    //     scanf("%d", &pick);
    //     if (pick > 4 || pick <= 0)
    //     {
    //         printf("Invalid!\n");
    //         break;
    //     }
    //     rem -= pick;
    //     printf("Remaining matchsicks = %d\n", rem);
    //     comp = 5 - pick;
    //     printf("Computer choose %d\n", comp);
    //     rem -= comp;
    //     printf("Remaining matchsicks = %d\n", rem);
    //     if (rem == 1)
    //     {
    //         printf("You loses!\n");
    //         break;
    //     }
    // }

    // (g) Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
    // int num, p = 0, n = 0, z = 0;
    // char c = 'y';
    // char k;
    // while (c == 'y')
    // {
    //     printf("Enter a number : ");
    //     scanf("%d", &num);
    //     if (num > 0)
    //     {
    //         p++;
    //     }
    //     else if (num < 0)
    //     {
    //         n++;
    //     }
    //     else
    //     {
    //         z++;
    //     }
    //     printf("If you want to use this then type 'y' and not then type any character : ");
    //     scanf(" %c", &k);
    //     c = k;
    // }
    // printf("The total -ve you entered is %d +ve is %d and 0 is %d\n", n, p, z);

    // (h) Write a program to receive an integer and find its octal equivalent. (Hint: To obtain octal equivalent of an integer, divide it continuously by 8 till dividend doesn’t become zero, then write the remainders obtained in reverse direction.)
    // int num, rem = 0, k, rev = 0;
    // printf("Enter a integer : ");
    // scanf("%d", &num);
    // k = num;
    // while (num != 0)
    // {
    //     rem = rem + num % 8;
    //     num /= 8;
    //     rem *= 10;
    // }
    // num = k;
    // rem /= 10;
    // while (rem != 0)
    // {
    //     rev = rev + rem % 10;
    //     rem /= 10;
    //     rev *= 10;
    // }
    // printf("The octal equivalent of %d is %d", num, rev / 10);

    // (i) Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list.
    // int max, min, num;
    // char c = 'y';
    // min = INT_MAX;
    // max = INT_MIN;
    // while (c == 'y' || c == 'Y')
    // {
    //     printf("Enter a number : ");
    //     scanf("%d", &num);
    //     if (num < min)
    //     {
    //         min = num;
    //     }
    //     if (num > max)
    //     {
    //         max = num;
    //     }
    //     fflush(stdin);
    //     printf("If you want to enter again then type 'y'or 'Y' else type any thing : ");
    //     scanf("%c", &c);
    // }
    // printf("Max = %d\nMin = %d\nRange = %d\n", max, min, max - min);

    return 0;
}