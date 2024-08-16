#include <stdio.h>
#include <math.h>
int main()
{
    printf("In this code we are solving Exercise 6 (More Complex Repetitions) of Let Us C \n");

    // (a) Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)
    // int k = 0;
    // for (int i = 2; i <= 300; i++)
    // {
    //     for (int j = 2; j <= (i - 1); j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             k++;
    //             break;
    //         }
    //     }
    //     if (k == 0)
    //     {
    //         printf("%d is prime\n", i);
    //     }
    // }

    // (b) Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1.
    // int i = 1;
    // while (i <= 500)
    // {
    //     if (i % 20 == 0)
    //     {
    //         printf("%c", 1);
    //         printf("\n");
    //     }
    //     else
    //     {
    //         printf("%c", 1);
    //     }
    //     i++;
    // }

    // (c) Write a program to add first seven terms of the following series 1/1! + 2/2! + 3/3! +.....
    // float add = 0;
    // int fact = 1;
    // for (float i = 1; i <= 7; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         fact = fact * j;
    //     }
    //     add = add + (i / fact);
    //     fact = 1;
    // }
    // printf("The sum of the first seven term = %f",add);

    // (d) Write a program to generate all combinations of 1, 2 and 3 using for loop.
    // int i, j, k;
    // for (i = 1; i <= 3; i++)
    // {
    //     for (j = 1; j <= 3; j++)
    //     {
    //         for (k = 1; k <= 3; k++)
    //         {
    //             if (i != j && j != k && k != i)
    //             {
    //                 printf("%d %d %d\n", i, j, k);
    //             }
    //         }
    //     }
    // }

    // (e) A machine is purchased which will produce earning of Rs. 1000 per year while it lasts. The machine costs Rs. 6000 and will have a salvage value of Rs. 2000 when it is condemned. If 9 percent per annum can be earned on alternate investments, write a program to determine what will be the minimum life of the machine to make it a more attractive investment compared to alternative investment?

    // (c) Write a program to print the multiplication table of the number entered by the user. The table should get displayed in the following form: 29 * 1 = 29, 29 * 2 = 58
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d X %d = %d\n", n, i, n * i);
    // }

    // (f) According to a study, the approximate level of intelligence of a person can be calculated using the following formula: i = 2 + ( y + 0.5 x ) Write a program that will produce a table of values of i, y and x, where y varies from 1 to 6, and, for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.
    // printf("Y\tX\tI\n");
    // for (int y = 1; y <= 6; y++)
    // {
    //     for (float x = 5.5; x <= 12.5; x += 0.5)
    //     {
    //         printf("%d\t%.1f\t%.2f\n", y, x, (2 + (y + 0.5 * x)));
    //     }
    // }

    // (g) When interest compounds q times per year at an annual rate of r % for n years, the principal p compounds to an amount a as per the following formula a = p ( 1 + r / q )^nq Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.
    // for (int i = 0; i < 10; i++)
    // {
    //     float p, r, q, a, n;
    //     printf("Enter principal value, rate, year and q : \n");
    //     scanf("%f %f %f %f", &p, &r, &n, &q);
    //     printf("The Amount = %.3f\n", (p * pow((1 + r / q), (n * q))));
    // }

    // (h) The natural logarithm can be approximated by the following series : (x-1)/x + (1/2)*((x-1)/x)^2 + (1/2)*((x-1)/x)^3 + (1/2)*((x-1)/x)^4 + ...  If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
    // int x;
    // printf("Enter the value of x : ");
    // scanf("%d", &x);
    // float sum = ((x - 1) / x);
    // for (int i = 1; i <= 6; i++)
    // {
    //     sum = sum + (1.0 / 2) * pow(((x - 1.0) / x), (i + 1.0));
    // }
    // printf("The sum upto 7th term = %.2f\n", sum);

    // (i) Write a program to generate all Pythogorean Triplets with side length less than or equal to 30.
    // int i, j, k;
    // for (i = 1; i <= 30; i++)
    // {
    //     for (j = 1; j <= 30; j++)
    //     {
    //         for (k = 1; k <= 30; k++)
    //         {
    //             if (i * i + j * j == k * k)
    //             {
    //                 printf("%d %d %d\n", i, j, k);
    //             }
    //         }
    //     }
    // }

    // (j) Population of a town today is 100000. The population has increased steadily at the rate of 10 % per year for last 10 years. Write a program to determine the population at the end of each year in the last decade.
    // int pop = 100000;
    // int arr[11], p = 1;
    // arr[0] = pop;
    // for (int i = 0; i < 10; i++)
    // {
    //     pop = pop - (pop * 10 / 100);
    //     arr[i+1] = pop;
    // }
    // for (int j = 10; j >= 0; j--)
    // {
    //     printf("Population in %d year = %d\n", p, arr[j]);
    //     p++;
    // }

    // (k) Ramanujan number is the smallest number that can be expressed as sum of two cubes in two different ways. Write a program to print all such numbers up to a reasonable limit.

    // (l) Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.
    // char am[] = "AM", pm[] = "PM";
    // for (int i = 1; i <= 24; i++)
    // {
    //     if (i == 1)
    //     {
    //         printf("The time is 12 %s Midnight\n", am);
    //     }
    //     else if (i >= 13)
    //     {
    //         if (i == 13)
    //         {
    //             printf("The time is 12 %s Noon\n", pm);
    //         }
    //         else
    //         {

    //             printf("The time is %d %s\n", (i - 13), pm);
    //         }
    //     }
    //     else
    //     {
    //         printf("The time is %d %s\n", (i - 1), am);
    //     }
    // }

    // (m) Write a program to produce the following output:
    // int n, num = 1;
    // printf("Enter the value of n : ");
    // scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     int space = (n - i) * 2;
    //     for (space; space >= 1; space--)
    //     {
    //         printf(" ");
    //     }
    //     for (int col = i; col >= 1; col--)
    //     {
    //         printf("%4d", num++);
    //     }
    //     printf("\n");
    // }

    // (n) Write a program to produce the following output:
    // for (int row = 1; row <= 7; row++)
    // {
    //     char pt = 'A';
    //     for (int col1 = (7 - row + 1); col1 >= 1; col1--)
    //     {
    //         printf("%c", pt);
    //         pt++;
    //     }
    //     pt -= 1;
    //     for (int space = (2 * row - 3); space >= 1; space--)
    //     {
    //         printf(" ");
    //     }
    //     char pt2 = ('G' - row + 1);
    //     for (int col2 = (7 - row + 1); col2 >= 1; col2--)
    //     {
    //         if (col2 == 7)
    //         {
    //             pt2--;
    //             continue;
    //         }
    //         printf("%c", pt2--);
    //     }

    //     printf("\n");
    // }

    // (o) Write a program to produce the following output:
    // int n;
    // printf("Enter the value of n : ");
    // scanf("%d",&n);
    // for(int i = 1 ; i <= n ; i++)
    // {
    //     int space = (n - i) * 2;
    //     for(space ; space >= 1 ; space--)
    //     {
    //         printf(" ");
    //     }
    //     int num = 1;
    //     for(int col = i ; col >= 1 ; col--)
    //     {
    //         printf("%4d",num++);
    //     }
    //     printf("\n");
    // }

    // o e k complete nahi hua hai

    return 0;
}