#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("In this lecture we will learning about Dynamic Memory Allocation\n");

    // sizeof() operator in C
    // printf("The size of int in my PC is %d\n",sizeof(int));
    // printf("The size of double in my PC is %d\n",sizeof(double));
    // printf("The size of char in my PC is %d\n",sizeof(char));

    // malloc()
    // int *ptr;
    // If memory is not allocated malloc() return a NULL pointer
    // malloc() retrun a void pointer so we need to type caste in a int pointer
    // ptr = (int *)malloc(4 * sizeof(int));
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of ptr[%d] : ", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of ptr[%d] = %d and Address = %u\n", i, ptr[i],&ptr[i]);
    // }

    // Quick Quiz: Write a progrm to allocate memory 5 element of float
    // float *ptr;
    // ptr = (float *)malloc(5 * sizeof(float));
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the value of %d element : ", i);
    //     scanf("%f", &ptr[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The value of %d element = %.3f \n", i, ptr[i]);
    // }

    // calloc()
    // It take two argument (number,sizeof()) and set default value to 0.
    // int *p;
    // p = (int*)calloc(5,sizeof(int));
    // for(int i = 0; i<5;i++){
    //     printf("Enter value of %d element : ",i);
    //     scanf("%d",&p[i]);
    // }
    // for(int i = 0; i<5;i++){
    //     printf("The value of %d element = %d and Address = %u\n",i,p[i],&p[i]);
    // }

    // Quick Quiz: Write a program to create an array of size 'n' from input and allocate that memory from dynamic memory allocation
    // int n, *ptr;
    // printf("Enter the number of elements of array : ");
    // scanf("%d", &n);
    // ptr = (int *)calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of ptr[%d] : ", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of element ptr[%d] = %d\n", i, ptr[i]);
    // }

    // free()
    // Quick Quiz: Write a program to demonstrate free() using malloc
    // int *i;
    // i = (int *)malloc(3*sizeof(int));
    // free(i);

    // realloc()
    // int *ptr;
    // ptr = (int *)malloc(4 * sizeof(int));
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of ptr[%d] : ", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of ptr[%d] is %d\n", i, ptr[i]);
    // }

    // free(ptr);  // If you will free ptr here then we need to again malloc it and we cannot use realloc becaue it is only use to rellocate memory not to allocate

    // ptr = realloc(ptr, 2 * sizeof(int)); // It will reallocate ptr memory

    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Enter the value of ptr[%d] : ", i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("The value of ptr[%d] is %d\n", i, ptr[i]);
    // }

    return 0;
}