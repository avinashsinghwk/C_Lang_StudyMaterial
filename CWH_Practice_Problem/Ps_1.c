#include <stdio.h>
int main()
{
    printf("In this lecture we will solving practice problem 1\n");

    // Question 1. Write a C program to calculate area of a rectangle
    // a> using hard code input
    // b> using taking input from the user

    // int length = 4, breadth = 3;
    // int area = length * breadth;
    // printf("The area of rectangle = %d\n", area);

    // int l, b, a;
    // printf("Enter length : ");
    // scanf("%d", &l);
    // printf("Enter breadth : ");
    // scanf("%d", &b);
    // a = l * b;
    // printf("The area of the rectangle = %d",a);

    // Question 2. Calcualte the area of a circle and modify the same program to volume of a cylinder given it's height and radius
    // float r = 10.0, A = 3.14159 * r * r;
    // printf("The area of circle = %f\n", A);

    // float volume;
    // int h;
    // printf("Enter height: ");
    // scanf("%d", &h);
    // volume = 3.14159 * r * r * h;
    // printf("The volume of cylinder = %f", volume);

    // Question 3. Write a program to convert celcius to fahrenheit
    // int temC;
    // printf("Enter temperature in celcius : ");
    // scanf("%d",&temC);
    // float temF = (temC * 1.8) + 32;
    // printf("%d deg. Celcius = %f deg. Fahrenheit",temC,temF);

    // Question 4. Write a program to calculate simple interest given it's value of principle, no.of years and rate of interest
    int years;
    float rate, principal,SI;
    printf("Enter principal value: ");
    scanf("%f",&principal);
    printf("Enter no. of years: ");
    scanf("%d",&years);
    printf("Enter rate: ");
    scanf("%f",&rate);
    SI = principal * rate * years / 100.0;
    printf("The Simple Interest = %f",SI);

    return 0;
}