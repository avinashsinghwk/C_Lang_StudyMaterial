#include <stdio.h>
void rev(int a[], int n);
int count(int a[]);
int main()
{
    printf("In this lecture we will be solving practice problem 7\n");

    // Question 1. Create an array of 5 numbers and verify that the pointer (ptr + 2) will point it's third element of the array
    // int a[5] = {21, 32, 51, 99, 10}, *ptr;
    // ptr = a;
    // printf("The address of the first  element of the array is %u and value = %d\n",ptr,*ptr);
    // ptr += 2;
    // printf("The address of the third element of the array is %u and value = %d\n",ptr,*ptr);

    // Question 2. If S[3] is a 1-D array of integers then *(S + 3) refers to third element, True or False
    // False, because if we add 3 to the pointer it will point to forth element of the array.

    // Question 3. Create an array of 10 elements and store multiplication table of 5 in it
    // int table[10];
    // for (int i = 1; i <= 10; i++)
    // {
    //     table[i - 1] = 5 * i;
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\t", table[i]);
    // }

    // Question 4. Repeat Q-3 using taking user input
    // int table[10], n;
    // printf("Enter the value of n : ");
    // scanf("%d", &n);
    // for (int i = 1; i <= 10; i++)
    // {
    //     table[i - 1] = n * i;
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\t", table[i]);
    // }

    // Question 5. Write a program containing function which reverse the array
    // int a[5] = {21, 34, 53, 9, 100};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\t", a[i]);
    // }
    // printf("\nThe array after reversing \n");
    // rev(a, 5);

    // Question 6. Write a program containing function which counts the number of positive integer in an array
    // int a[5] = {32, 11, -21, -7, 77};
    // printf("The value of positive integer in the array is %d",count(a));

    // Question 7. Create an array of size 3 X 10 and put the multiplication table of 7, 9 and 11 in it.
    // int table[3][10];
    // int k = 7;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 1; j <= 10; j++)
    //     {
    //         table[i][j - 1] = k * j;
    //     }
    //     k += 2;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         printf("%d\t",table[i][j]);
    //     }
    //     printf("\n");
    // }

    // Question 8. Repeat Q-7 by using user input
    // int table[3][10], a, b, c;
    // printf("Enter the value of a, b and c : \n");
    // scanf("%d %d %d", &a, &b, &c);
    // for (int j = 1; j <= 10; j++)
    // {
    //     table[0][j - 1] = a * j;
    // }
    // for (int j = 1; j <= 10; j++)
    // {
    //     table[1][j - 1] = b * j;
    // }
    // for (int j = 1; j <= 10; j++)
    // {
    //     table[2][j - 1] = c * j;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         printf("%d\t", table[i][j]);
    //     }
    //     printf("\n");
    // }

    // Question 9. Create a 3-D array and print the address of the array in ascending order
    // int a[2][3][4];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         for (int k = 0; k < 4; k++)
    //         {
    //             printf("The address of a[%d][%d][%d] = %u\n", i, j, k, &a[i][j][k]);
    //         }
    //     }
    // }

    return 0;
}
void rev(int a[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

int count(int a[])
{
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 0)
        {
            c++;
        }
    }
    return c;
}