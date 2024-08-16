#include <stdio.h>
// void printArray(int *ptr, int n);
void printArray(int ptr[], int n);
int main()
{
    printf("In this lecture we will be learning about Array\n");

    // int marks[4];

    // Taking input of the elements of the array
    // for(int i = 0; i < 4; i++){
    //     printf("Enter marks of student %d : ",i+1);
    //     scanf("%d",&marks[i]);
    // }

    // Printing the elements of the array
    // for(int i = 0; i < 4; i++){
    //     printf("Student %d Marks = %d  Address = %u\n",i+1 ,marks[i], &marks[i]);
    // }

    // float a[3] = {2.1, 3.23, 5.3};
    // printf("a[0] = %f\n",a[0]);
    // printf("a[1] = %f\n",a[1]);
    // printf("a[2] = %f\n",a[2]);

    // Memory allocate by the array is (no. of elements present in array * size of the data type)
    // int is of 4 byte (depends of the architecture)

    // Pointer Arthmetic
    // int a = 43, *ptra;
    // ptra = &a;
    // printf("The value of ptra is %u\n",ptra);
    // ptra++;
    // ptra++;
    // ptra--;
    // ptra+=1;
    // printf("The value of ptra is %u\n",ptra);

    // char a = 'Z', *ptra;
    // ptra = &a;
    // printf("The value of ptra is %u\n",ptra);
    // ptra++;
    // ptra+=1;
    // printf("The value of ptra is %u\n",ptra);

    // double d = 2.1;
    // double *ptrd = &d;
    // printf("The value of ptrd is %u\n",ptrd);
    // ptrd--;
    // printf("The value of ptrd is %u\n",ptrd);

    // Quick Quiz: Try pointer arthmetic on a variable
    // int i = 1, *ptra, *ptrs, *aptr;
    // ptra = &i;
    // printf("The value of ptra = %u\n", ptra);
    // ptra = ptra + 2;
    // printf("The value of ptra = %u\n", ptra);

    // ptrs = &i;
    // printf("The value of ptrs = %u\n", ptrs);
    // ptrs = ptrs - 1;
    // printf("The value of ptrs = %u\n", ptrs);

    // aptr = ptra - ptrs;
    // printf("The value of aptr = %u\n", aptr);

    // (ptra == ptrs) ? printf("Yes") : printf("No");

    // Array with Pointer
    // int a[4], *ptr;
    // ptr = &a[0];
    // ptr = a;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of a[%d] : ", i);
    //     scanf("%d", ptr);
    //     ptr++;
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Value of a[%d] = %d, Address = %u\n", i, a[i], ptr + i);
    // }

    // Array in function
    // int a[4] = {43, 52, 11, 91};
    // printArray(a,4);

    // Multi-dimention Array
    // int arr[3][2] = {{43,23},{21,99},{98,32}};
    // int arr[3][2];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("Enter the value of arr[%d][%d] : ", i, j);
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("The value of arr[%d][%d] = %d and The Address = %u\n", i, j, arr[i][j], &arr[i][j]);
    //     }
    // }

    // Quick Quiz: Take user input and print the 2-D Array in matrix
    // int arr[5][7], r, c;
    // printf("Enter no. of rows : ");
    // scanf("%d", &r);
    // printf("Enter no. of column : ");
    // scanf("%d", &c);
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("Enter no : ");
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d\t", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
// void printArray(int *ptr, int n){
//     for(int i = 0; i<n; i++){
//         printf("The value of a[%d] is = %d\n",i,*(ptr+i));
//     }
// }
void printArray(int ptr[], int n)
{
    ptr[2] = 11111;
    for (int i = 0; i < n; i++)
    {
        printf("The value of a[%d] is = %d\n", i, ptr[i]);
    }
}