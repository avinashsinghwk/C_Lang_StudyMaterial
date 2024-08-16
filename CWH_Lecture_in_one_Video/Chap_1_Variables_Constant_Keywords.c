#include <stdio.h>
int main()
{
    // Declaring variables to store 
    /*
    Hii
    How
    are YOu?
    */

    printf("Hello, This is my first C program\n");

    // Variables
    int a = 4, d = 33;
    float b = 9.2;
    char c = 'Z';
    printf("The value of a and b and c are %d, %f, %c\n", a, b, c);
    printf("The sum of a and d = %d\n", a + d);
    printf("The sum of a and b = %f\n", a + b);

    // Input data from the user
    int z;
    printf("Enter any integer: ");
    scanf("%d", &z);
    printf("The value of z is %d\n", z);

    // Quick Quiz - Write a C program to to add two numbers 
    int p,k;
    printf("Enter the first number = ");
    scanf("%d",&p);
    printf("Enter second number = ");
    scanf("%d",&k);
    printf("The sum of the two numbers = %d",p + k);

    return 0;
}