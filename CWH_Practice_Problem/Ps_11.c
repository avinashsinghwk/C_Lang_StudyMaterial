#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("In this lecture we will be solving practice problem 11\n");

    // Question 1. Write a program to dynamically create an array of size 6 capable of storing 6 integer.
    // int *ptr;
    // ptr = (int *)malloc(6 * sizeof(int));
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter the value of p[%d] : ", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("The value of ptr[%d] = %d\n", i, ptr[i]);
    // }
    // free(ptr);

    // Question 2. Use the Array of Q-1 to store 6 integer entered by the user
    // Already solved in Q-1

    // Question 3. Attempt Q-1 using calloc()
    // int *ptr;
    // ptr = (int *)calloc(6, sizeof(int));
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter the value of ptr[%d] : ", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("The value of ptr[%d] = %d\n", i, ptr[i]);
    // }
    // free(ptr);

    // Question 4. Create an array dynamically capable of storing 5 integer. Now use realloc so it can now store 10 integer
    // int *p;
    // p = (int *)malloc(5 * sizeof(int));
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the value of p[%d] : ", i);
    //     scanf("%d", &p[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The value of p[%d] = %d\n", i, p[i]);
    // }
    // p = realloc(p, 10 * sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the value of p[%d] : ", i);
    //     scanf("%d", &p[i]);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The value of p[%d] = %d\n", i, p[i]);
    // }
    // free(p);

    // Question 5. Create an array of multiplication table 7 upto 10 (7 X 10). Use realloc to make it store up to 15 number (7 X 15) in a file.
    // int *table;
    // FILE *f;
    // f = fopen("aisehi.txt", "w");
    // table = (int *)malloc(10 * sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     table[i] = 7 * (i+1);
    //     fprintf(f, "7 X %d = %d\n", i + 1, table[i]);
    // }
    // fclose(f);
    // table = realloc(table, 15 * sizeof(int));
    // f = fopen("aisehi.txt", "a");
    // fprintf(f, "\n\nNow I am reallocating the file........\n\n");
    // for (int i = 0; i < 15; i++)
    // {
    //     table[i] = 7 * (i+1);
    //     fprintf(f, "7 X %d = %d\n", i + 1, table[i]);
    // }
    // fclose(f);
    // free(table);

    // Question 6. Attempt Q-4 using calloc()
    // int *p;
    // p = (int *)calloc(5, sizeof(int));
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the value of p[%d] : ", i);
    //     scanf("%d", &p[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The value of p[%d] = %d\n", i, p[i]);
    // }
    // p = realloc(p, 10 * sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Enter the value of p[%d] : ", i);
    //     scanf("%d", &p[i]);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("The value of p[%d] = %d\n", i, p[i]);
    // }
    // free(p);

    return 0;
}