#include <stdio.h>
// Question 4
typedef struct employee
{
    char name[18];
    int number;
    float salary;
} emp;

int main()
{
    printf("In this lecture we will be solving practice problem 10\n");

    // Question 1. Write a program to read 3 integer from a file
    // FILE *f;
    // int a, b, c;
    // f = fopen("Ps_10_read.txt","r");
    // fscanf(f,"%d",&a);
    // fscanf(f,"%d",&b);
    // fscanf(f,"%d",&c);
    // fclose(f);
    // printf("The value of a = %d, b = %d, c = %d\n",a,b,c);

    // Question 2. Write a program to generate multiplication tabele of a given number. Store it in a text file
    // FILE *f;
    // int c;
    // printf("Enter a number : ");
    // scanf("%d", &c);
    // f = fopen("Ps_10_write.txt", "w");
    // for (int i = 1; i <= 10; i++)
    // {
    //     fprintf(f, "%d X %i = %d\n", c, i, c * i);
    // }
    // fclose(f);

    // Question 3. Write a program to read a text file character by character. Write it's content twice in a seperate file
    // FILE *f, *f2;
    // char c;
    // f2 = fopen("Ps_10_write.txt", "w");
    // for (int i = 0; i < 10; i++)
    // {
    //     f = fopen("Ps_10_read.txt", "r");
    //     c = fgetc(f);
    //     while (c != EOF)
    //     {
    //         fputc(c, f2);
    //         c = fgetc(f);
    //     }
    //     fprintf(f2, "\n");
    // }
    // fclose(f);
    // fclose(f2);

    // Question 4. Take number and salary of two employee as input from the user and write them to a text file
    // emp e[4];
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Enter name of Employee %d : ", i + 1);
    //     scanf("%s", e[i].name);
    //     printf("Enter number of Employee %d : ", i + 1);
    //     scanf("%d", &e[i].number);
    //     printf("Enter salary of Employee %d : ", i + 1);
    //     scanf("%f", &e[i].salary);
    // }
    // FILE *fi;
    // fi = fopen("Ps_10_write.txt", "w");
    // fprintf(fi, "Name\t\tNumber\t\tSalary\n");
    // for (int i = 0; i < 2; i++)
    // {
    //     fprintf(fi, "%s\t\t%d\t\t%.3f\n", e[i ].name, e[i].number, e[i].salary);
    // }
    // fclose(fi);

    // Question 5. Write a program to modify a file containing an integer to double it's value
    // FILE *f;
    // int num;
    // f = fopen("Ps_10_read.txt", "r");
    // fscanf(f, "%d", &num);
    // num *= 2;
    // f = fopen("Ps_10_read.txt", "w");
    // fprintf(f, "%d", num);
    // fclose(f);
    // fclose(f);

    return 0;
}