#include <stdio.h>
#include <math.h>

void display(); // Function prototype

// Quick Quiz
void goodMorning();
void goodAfternoon();
void goodNight();

int sum(int a, int b);

int change(int z);

// Recursion
int factorial(int n);

int main()
{
    printf("In this lecture we will be studying about Function and Recursion\n");

    // Function
    // display(); // Calling a function

    // Quick Quiz: Write a program with 3 function a> goodMorning() b> goodAfternoon(),  c> goodNight()
    // goodMorning();
    // goodAfternoon();
    // goodNight();

    // printf("The sum of two numbers = %d", sum(30, 34));

    // int y = 44;
    // printf("The value of y before is %d\n",y);
    // change(y);
    // printf("The value of y after is %d\n",y);

    // Quick Quiz: Using library function, make a program to find area of a square
    // int side;
    // printf("Enter the value of side : ");
    // scanf("%d",&side);
    // printf("The area of the square whose side is %d is %f m square.",side,pow(side,2));

    // Recursion
    int fact;
    printf("Enter a number : ");
    scanf("%d",&fact);
    printf("The value of %d! is %d\n",fact,factorial(fact));

    return 0;
}

// Function definition
void display()
{
    printf("This is display\n");
}

// Quick Quiz
void goodMorning()
{
    printf("Good Morning\n");
}
void goodAfternoon()
{
    printf("Good Afternoon\n");
}
void goodNight()
{
    printf("Good Night");
}

int sum(int a, int b)
{
    return (a + b);
}

int change(int z)
{
    z = 55;
    return 0;
}

// Recursion
int factorial(int n)
{
    if(n == 1 || n == 0){
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
