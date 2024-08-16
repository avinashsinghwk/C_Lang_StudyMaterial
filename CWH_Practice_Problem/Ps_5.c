#include <stdio.h>

// Question 1.
float avg(int a, int b, int c);

// Question 2.
float temp(float tem);

// Question 3.
float gravity(int n);

// Question 4.
int ret(int n);

// Question 6.
int sum(int n);

// Question 7.
void star(int i);

int main()
{
    printf("In this lecture we will be solving practice problem 5\n");

    // Question 1. Write a program using function to calcualte average of three nubers
    // int a, b, c;
    // printf("Enter three numbers : \n");
    // scanf("%d %d %d", &a, &b, &c);
    // printf("The average of %d, %d, %d is %.3f", a, b, c, avg(a,b,c));

    // Question 2. Write a function to calculate temp. C into fahrenheit
    // float tem;
    // printf("Enter the temperature in Celcius : ");
    // scanf("%f",&tem);
    // printf("%f deg. Celcius = %f deg. Fahrenheit",tem,temp(tem));

    // Question 3. Write a program to calculate force of attraction on a body of mass m exerted by earth (g = 9.8 m/s2)
    // int gra;
    // printf("Enter the mass of the body : ");
    // scanf("%d",&gra);
    // printf("The gravitational force = %.2fN",gravity(gra));

    // Question 4. Write a program to calculate nth term of the fibonachi series using recurssion
    // int ser;
    // printf("Enter the term of the fibonachi series : ");
    // scanf("%d",&ser);
    // printf("The %dth term of the fibonachi series is %d", ser, ret(ser));

    // Question 5. Find result of the following: printf("%d %d %d \n",a, ++a, a++)
    // int z = 3;
    // printf("%d %d %d\n",z,++z,z++);

    // Question 6. Find sum of first n natural number using recursion
    // int x;
    // printf("Enter a number : ");
    // scanf("%d",&x);
    // printf("The sum of first %d natural number = %d",x,sum(x));

    // Question 7. Write a program to print stars in the order.
    // int term;
    // printf("Enter the term : ");
    // scanf("%d", &term);
    // star(term);

    return 0;
}
// Question 1.
float avg(int a, int b, int c)
{
    return ((a + b + c) / 3.0);
}

// Question 2.
float temp(float tem)
{
    return (tem * 1.8 + 32);
}

// Question 3.
float gravity(int n)
{
    return (n * 9.8);
}

// Question 4.
int ret(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (ret(n - 1) + ret(n - 2));
    }
}

// Question 6.
int sum(int n)
{
    if (n > 0)
    {
        return (n + sum(n - 1));
    }
}

// Question 7.
void star(int i)
{
    if (i > 0)
    {
        star(i - 1);
        printf("\n");
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
    }
}
