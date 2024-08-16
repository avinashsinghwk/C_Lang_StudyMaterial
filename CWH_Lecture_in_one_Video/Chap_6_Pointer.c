#include <stdio.h>
int sum(int a, int b);
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    printf("In this lecture we will be studying about the Pointers.\n");

    // Pointer
    // int a = 3, *ptr;
    // ptr = &a;
    // printf("a = %d\n",a);
    // printf("a = %d\n",*ptr);
    // printf("address of a = %u\n",&a);
    // printf("value of ptr = address of a = %u and %u\n",ptr,*(&ptr));
    // printf("address of ptr = %u\n",&ptr); 

    // Pointer to Pointer
    // int **ptr2;
    // ptr2 = &ptr;
    // printf("The address of ptr = %u\n",ptr2);
    // printf("The vlaue of ptr = %u\n",*ptr2);
    // printf("The address of ptr2 = %u\n",&ptr2);
    // printf("The value of ptr2 = address of ptr = %u\n",*(&ptr2));

    // Types of Function Call

    // a> Call by value
    int a = 2, b = 8;
    // printf("The value of a and b in call by value is %d and %d\n",a,b);
    // printf("The sum of a + b = %d\n",sum(a,b));
    // printf("The value of a and b after function call, in call by value is %d and %d\n",a,b);

    // b> Call by Reference
    // int *ptra, *ptrb;
    // ptra = &a;
    // ptrb = &b;
    printf("The value of a and b in call by reference before swap are %d and %d\n",a,b);
    //wrong_swap(a,b); // It won't work because we are passing values of the variable not the address
    swap(&a,&b);
    printf("The sum of a and b after swaping in call of reference are %d and %d\n",a,b);
    // printf("The value of a and b after function call in call by reference is %d and %d\n",a,b);
    

    return 0;
}
int sum(int a, int b){
    int c = a + b;
    a = 4221;
    b = 343;
    return c;
}
void wrong_swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}