#include <stdio.h>
#include <stdlib.h>

int fact(int n);
void prime(int n);
void oddEven(int n);
int main()
{
    printf("In this code i am solving Exercise 7 Case Control Instruction\n");

    // Question . Write a menu driven program which has following options: 1. Factorial of a number, 2. Prime or not, 3. Odd or even, 4. Exit ... Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the ‘Exit’ option the program should continue to run. Hint: Make use of an infinite while and a switch statement.
    // int ch, n;
    // char use;
    // do
    // {
    //     printf("-----------MENU------------\n\n");
    //     printf("Type 1 for Factorial\n");
    //     printf("Type 2 for Prime Check\n");
    //     printf("Type 3 for Odd Even\n");
    //     printf("Type 4 for Exit\n");
    //     printf("Enter your choice : ");
    //     scanf("%d", &ch);

    //     switch (ch)
    //     {
    //     case 1:
    //         printf("Enter a number : ");
    //         scanf("%d", &n);
    //         int result = fact(n);
    //         printf("The factorial of %d is %d\n", n, result);
    //         break;

    //     case 2:
    //         printf("Enter a number : ");
    //         scanf("%d", &n);
    //         prime(n);
    //         break;

    //     case 3:
    //         printf("Enter a number : ");
    //         scanf("%d", &n);
    //         oddEven(n);
    //         break;

    //     case 4:
    //         exit(0);
    //         break;

    //     default:
    //         printf("Invalid Choice\n");
    //     }
    //     printf("Want to use again this menu (Y/N) : ");
    //     fflush(stdin);
    //     scanf("%c", &use);
    // } while (use == 'y' || use == 'Y');

    // Question. Write a program to find the grace marks for a student using switch. The user should enter the class obtained by the student and the number of subjects he has failed in. Use the following logic:   (a) If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace. Otherwise the grace is of 5 marks per subject. (b) If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace. Otherwise the grace is of 4 marks per subject. (c) If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any grace. Otherwise the grace is of 5 marks.
    int class, failedSub;
    printf("Enter the class the student got : ");
    scanf("%d", &class);
    printf("Enter the subjects the student gets failed : ");
    scanf("%d", &failedSub);
    // switch (class)
    // {
    // case 1:
    //     if (failedSub > 3)
    //     {
    //         printf("You can not get any grace marks \n");
    //     }
    //     else
    //     {
    //         printf("You can get 5 marks in grace in each subject\n");
    //     }
    //     break;

    // case 2:
    //     if (failedSub > 2)
    //     {
    //         printf("You can not get any grace marks \n");
    //     }
    //     else
    //     {
    //         printf("You can get 4 marks in grace in each subject\n");
    //     }
    //     break;

    // case 3:
    //     if (failedSub > 1)
    //     {
    //         printf("You can not get any grace marks \n");
    //     }
    //     else
    //     {
    //         printf("You can get 5 marks in grace in total\n");
    //     }
    //     break;

    // default:
    //     printf("Hey! Class can only be 1st, 2nd or 3rd\n");
    // }

    return 0;
}

int fact(int n)
{
    int a = 1, fact = 1;
    if (n == 0)
    {
        return 1;
    }
    while (a <= n)
    {
        fact = fact * a;
        a++;
    }
    return fact;
}

void prime(int n)
{
    if (n > 1)
    {
        int check = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                check++;
                break;
            }
        }
        if (check == 0)
        {
            printf("Yes %d is prime\n", n);
        }
        else
        {
            printf("No %d is not prime\n", n);
        }
    }
    else
    {
        printf("Type a number greater than 1\n");
    }
}

void oddEven(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is Even\n", n);
    }
    else
    {
        printf("%d is Odd\n", n);
    }
}