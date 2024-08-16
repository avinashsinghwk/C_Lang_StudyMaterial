#include <stdio.h>
void q_2_address(int i);
void q_3_change(int *a);
void q_4_sumAvg(int a, int b, int *sum, float *avg);
void q_6_change(int a);
int main()
{
    printf("In this lecture we will be solving practice probelm 6\n");

    // Question 1. Write a program to print the address of the variable, Use this address to get value of the variable
    // int a = 3;
    // printf("The address of a is %u\n",&a);
    // printf("The value of a using address of the varible is %d\n",*(&a));

    // Question 2. Write a program having a variable i, Print the address of i, Pass the variable to a function and print it's address, Are these address same? and why?
    // int i;
    // printf("The address of i is %u\n", &i);
    // q_2_address(i);
    // Both i will print different address because, these i's are local variables and it's scope is only the function in which it is written

    // Question 3. Write a program to change the value of a variable of ten times of it's current value, Write a function and pass the value by referance
    // int a = 30;
    // printf("The value of a before calling a function is %d\n", a);
    // q_3_change(&a);
    // printf("The value of a after calling a function is %d\n", a);

    // Question 4. Write a program using a function which calculate the sum and average of two numbers. Use pointer and print the values of sum and average in main function.
    // int a, b, sum;
    // float avg;
    // printf("Enter two numbers \n");
    // scanf("%d \n %d", &a, &b);
    // q_4_sumAvg(a, b, &sum, &avg);
    // printf("The sum of %d and %d is %d\n", a, b, sum);
    // printf("The avg of %d and %d is %.2f\n", a, b, avg);

    // Question 5. Write a program to print value of a variable i , by using pointer to pointer type of variables
    int i = 10, *ptr, **ptr2;
    ptr = &i;
    ptr2 = &ptr;
    printf("The value of i by using pointer to pointer = %d\n",**ptr2);

    // Question 6. Try Q-3 by call by value and verify that it doesn't change the value of said variable
    // int a = 30;
    // printf("The value of a before calling a function = %d\n", a);
    // q_6_change(a);
    // printf("The value of a after calling the function = %d\n", a);

    return 0;
}
void q_2_address(int i)
{
    printf("The address of i inside the function is %u\n", i);
}

void q_3_change(int *a)
{
    *a = *a * 10;
}

void q_4_sumAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = *sum / 2.0;
}

void q_6_change(int a)
{
    a = a * 10;
}