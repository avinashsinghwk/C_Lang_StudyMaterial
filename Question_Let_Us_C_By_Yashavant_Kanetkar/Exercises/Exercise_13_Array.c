#include<stdio.h>
int main()
{
    printf("In this code i am going to solve problems based on Arrays on Chapter 13\n");

    // (a) Twenty-five numbers are entered from the keyboard into an array. The number to be searched is entered through the keyboard by the user. Write a program to find if the number to be searched is present in the array and if it is present, display the number of times it appears in the array.
    // int size, arr[25], search, count = 0;
    // printf("Enter the size of the array : ");
    // scanf("%d", &size);
    // printf("Enter the array.......\n");
    // for(int i = 0; i < size; i++)
    // {
    //     printf("arr[%d] = ", i);
    //     scanf("%d", &arr[i]);
    // }
    // printf("Enter a number to be searched : ");
    // scanf("%d", &search);
    // for(int i = 0; i < size; i++)
    // {
    //     if(arr[i] == search)
    //     {
    //         count++;
    //     }
    // }
    // if(count == 0)
    // {
    //     printf("<<<<<<<<Number not found>>>>>>>\n");
    // }
    // else
    // {
    //     printf("The number is present for %d times\n", count);
    // }

    // (d) Twenty-five numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many odd.
    int size, arr[25], pos = 0, neg = 0, odd = 0, even = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the array.......\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else if(arr[i] % 2 != 0)
        {
            odd++;
        }
        if(arr[i] > 0)
        {
            pos++;
        }
        else if(arr[i] < 0)
        {
            neg++;
        }
    }
    printf("The total number of +ve, -ve, even and odd number are ....\n");
    printf("Positive number = %d\n", pos);
    printf("Negative number = %d\n", neg);
    printf("Even number = %d\n", even);
    printf("Odd number = %d\n", odd);

    return 0;
}