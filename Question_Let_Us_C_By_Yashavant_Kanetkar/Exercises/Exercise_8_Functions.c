#include <stdio.h>

int factorial(int a);
int power(int a, int b);
void romanChanger(int n);
void leapYearChecker(int year);
void primeFactor(int n);
int main()
{
    printf("In this code i will be solving some exercise problem 8 which is about functions\n");

    // (a) Write a function to calculate the factorial value of any integer entered through the keyboard.
    // int a;
    // printf("Enter the value of a : ");
    // scanf("%d",&a);
    // int ans = factorial(a);
    // printf("The value of %d! = %d\n",a, ans);

    // (b) Write a function power ( a, b ), to calculate the value of a raised to b.
    // int a, b;
    // printf("Enter number to find the power of : \n");
    // scanf("%d %d",&a, &b);
    // int ans = power(a, b);
    // printf("The value of %d^%d is %d",a, b, ans);

    // (c) Write a general-purpose function to convert any given year into its Roman equivalent. Use these Roman equivalents for decimal numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M. Example: Roman equivalent of 1988 is mdcccclxxxviii. Roman equivalent of 1525 is mdxxv.
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // romanChanger(n);

    // (d) Any year is entered through the keyboard. Write a function to determine whether the year is a leap year or not.
    // int year;
    // printf("Enter a year : ");
    // scanf("%d",&year);
    // leapYearChecker(year);

    // (e) A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number. For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime factors of 35 are 5 and 7.
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // primeFactor(n);

    return 0;
}
int factorial(int a)
{
    if(a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
       return (factorial(a - 1) * a) ;
    }
}

int power(int a , int b)
{
    if(b == 0)
    {
        return 1;
    }
    else
    {
        int mul = 1;
        for(int i = 1; i <= b; i++)
        {
            mul *= a;
        }
        return mul;
    }
}

void romanChanger(int n)
{
    printf("%d in roman is ",n);
    int div;
    if(n >= 1000)
    {
         div = n / 1000;
         while(div)
         {
            printf("M");
            div--;
         }
         n %= 1000;
    }
    if(n >= 500)
    {
         div = n / 500;
         while(div)
         {
            printf("D");
            div--;
         }
         n %= 500;
    }
    if(n >= 100)
    {
         div = n / 100;
         while(div)
         {
            printf("C");
            div--;
         }
         n %= 100;
    }
    if(n >= 50)
    {
         div = n / 50;
         while(div)
         {
            printf("L");
            div--;
         }
         n %= 50;
    }
    if(n >= 10)
    {
         div = n / 10;
         while(div)
         {
            printf("X");
            div--;
         }
         n %= 10;
    }
    if(n >= 5)
    {
         div = n / 5;
         while(div)
         {
            printf("V");
            div--;
         }
         n %= 5;
    }
    if(n >= 1)
    {
         div = n / 1;
         while(div)
         {
            printf("I");
            div--;
         }
         n %= 1;
    }
    
}

void leapYearChecker(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year \n", year);
    }
    else
    {
        if (year % 400 == 0)
        {
            printf("%d is a leap year \n", year);
        }
        else
        {
            printf("%d is not a leap year\n", year);
        }
    }
}

void primeFactor(int n)
{
    int check = 0, k = n / 2;
    printf("The prime factors of %d are : ", n);
    for (int i = 2; i <= k;)
    {
        if (n % i == 0)
        {
            printf("%d  ", i);
            check++;
            n /= i;
        }
        else
        {
            i++;
        }
    }
    if (check == 0)
    {
        printf("only 1 and %d\n", n);
    }
}