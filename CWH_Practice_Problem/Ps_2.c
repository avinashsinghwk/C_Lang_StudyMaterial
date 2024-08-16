#include<stdio.h>
int main()
{
    printf("In this lecture we will be soving practice problem 2");

    // Question 1. Which of the following in invalic in C, (int a; b = a;), (int V = 3 ^ 3), (char dt = '21 dec 2021';)
    // In 1st b is not declared (invalid), In 2nd ^ is a bitwise operator (valid), In 3rd a character should be only a letter (invalid)

    // Question 2. What data type will be returned 3.0 / 8 - 2
    // It will return a double, since the operation b/w double and int is always a double, it's value will be -1.625

    // Question 3. Write a program to check whether a number is divisible by 97 or not
    // int check;
    // printf("\nEnter a number : ");
    // scanf("%d",&check);
    // if(check % 97 == 0){
    //     printf("\nYes, %d is divisible by 97",check);
    // }
    // else{
    //     printf("\nNo, %d is not divisible by 97",check);
    // }

    // Question 4. Explain step by step calcualtion of this 3 * x / y - z + k, x = 2, y = 3, z = 3, k = 1
    // int x = 2, y = 3, z = 3, k = 1;
    // printf("\nThe value of 3 * x / y - z + k = %d",3 * x / y - z + k);
    /*
    6 / y - z + k
    2 - z + k
    - 1 + 1
    0
    */

    // Question 5. 3.0 + 1 will be what?
    // It will return a float, since the operation b/w float and int is always a float, it's value will be 4.0

    return 0;
}