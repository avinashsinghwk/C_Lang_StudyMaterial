#include <stdio.h>
#include <math.h>

int quesARecursive(unsigned int num);
int quesANonRecursive(unsigned int num);

void primeFactor(unsigned int num);

int fibonacciSeries(int n);

unsigned int binary(unsigned int n);
void binaryRecursive(unsigned int n);

int runningSum(int n);

int main()
{
    printf("In this code i am going to solve questions from the chapter 10 i.e Recursion\n");

    // (a) A 5-digit positive integer is entered through the keyboard, write a recursive and a non-recursive function to calculate sum of digits of the 5-digit number.
    // unsigned int num;
    // printf("Enter a five digit +ve number : ");
    // scanf("%d", &num);
    // int ans1 = quesARecursive(num);
    // int ans2 = quesANonRecursive(num);
    // printf("Using Recursive function sum = %d\n", ans1);
    // printf("Using Non Recursive function sum = %d\n", ans2);

    // (b) A positive integer is entered through the keyboard, write a program to obtain the prime factors of the number. Modify the function suitably to obtain the prime factors recursively.
    // unsigned int num;
    // printf("Enter a five digit +ve number : ");
    // scanf("%d", &num);
    // printf("The prime factor of %d is : ", num);
    // primeFactor(num);

    // (c) Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence. In a Fibonacci sequence the sum of two successive terms gives the third term. Following are the first few terms of the Fibonacci sequence: 1 1 2 3 5 8 13 21 34 55 89...
    // int n;
    // printf("Enter the value of n : ");
    // scanf("%d", &n);
    // printf("The fibonacci series : ");
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", fibonacciSeries(i));
    // }

    // (d) A positive integer is entered through the keyboard, write a function to find the binary equivalent of this number : (1) Without using recursion (2) Using recursion
    unsigned int num;
    printf("Enter the value of n : ");
    scanf("%u", &num);
    unsigned int ans = binary(num);
    printf("%u in binary = %u\n", num, ans);
    printf("%u in binary = ", num);
    binaryRecursive(num);

    // (e) Write a recursive function to obtain the running sum of first 25 natural numbers.
    // int n;
    // printf("Enter the value of n : ");
    // scanf("%d", &n);
    // printf("The running sum .......\n");
    // for(int i = 1; i < n; i++)
    // {
    //     printf("%d + %d = %d  ",runningSum(i), (i + 1), (runningSum(i) + i + 1));
    // }

    return 0;
}
int quesARecursive(unsigned int num)
{
    int sum;
    if (num == 0)
    {
        return 0;
    }
    else
    {
        sum = num % 10;
        num /= 10;
        return (sum + quesARecursive(num));
    }
}

int quesANonRecursive(unsigned int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + num % 10;
        num /= 10;
    }
    return sum;
}

void primeFactor(unsigned int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d  ", i);
            num /= i;
            break;
        }
    }
    if (num > 1)
    {
        primeFactor(num);
    }
}

int fibonacciSeries(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return (fibonacciSeries(n - 1) + fibonacciSeries(n - 2));
}

unsigned int binary(unsigned int n)
{
    int rem, i = 0, sum = 0;
    while (n != 0)
    {
        rem = n & 1;
        n >>= 1;
        // rem = n % 2;
        // n /= 2;
        if (rem == 1)
        {
            float a = pow(10, i);
            sum += (int)a;
        }
        i++;
    }
    return sum;
}

void binaryRecursive(unsigned int n)
{
    if(n > 1)
    {
        binaryRecursive(n / 2);
    }
    printf("%d", n % 2);
}

int runningSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (n + runningSum(n - 1));
}
