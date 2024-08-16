#include <stdio.h>
#include <string.h>
// Question 1,2
struct vector
{
    int x, y;
};

// Question 4
struct aisehi
{
    int a;
    char s[10];
};

// Question 5,6
struct complexNo
{
    float c;
};

// Question 7.
typedef struct complexNo2
{
    float k;
} com;

// Question 8
typedef struct bank
{
    char name[20];
    long account;
    int ifsc;
    float money;
} bnk;

// Question 9,10
typedef struct date
{
    int dd, mm, yy;
} date;

void display(struct complexNo k);
void dateDisplay(date d);
void cmp(date d1, date d2);
void sumVector(struct vector u, struct vector v);
int main()
{
    printf("In this lecture we will be solving practice problem 9\n");

    // Question 1. Write a two dinemtional vector in C lang.
    // struct vector v0, v1;
    // v0.x = 43;
    // v0.y = 87;
    // v1.x = 53;
    // v1.y = 98;
    // printf("Co-ordinate of v0 = (%d,%d)\n", v0.x, v0.y);
    // printf("Co-ordinate of v1 = (%d,%d)\n", v1.x, v1.y);

    // Question 2. Write a function sumVector() which retrun the sum of two vector passed to it. The vector must be two dimentional.
    // sumVector(v0,v1);

    // Question 3. 20 integer are to be stored in the memory what would you prefer arrray or struct
    // We will use array because we need to store only one type of data i.e int

    // Question 4. Write a  program to illustrate arrow -> operator in C
    // struct aisehi one, *ptr;
    // ptr = &one;
    // ptr->a = 5;
    // strcpy(ptr->s, "Babu");
    // printf("%d\t%s\n", ptr->a, ptr->s);

    // Question 5. Write a program with a structure representing a complex number
    // struct complexNo c1 ={34.21};
    // printf("%.3f\n",c1.c);

    // Question 6. Create an array of 5 complex number in Q-5 and display them with the help of a display function. The value must be taken from input of the user
    // struct complexNo num[5];
    // for(int i = 0; i < 5; i++){
    //     printf("The value of %d complex : ",i+1);
    //     scanf("%f",&num[i].c);
    // }
    // for(int i = 0; i< 5; i++){
    //     display(num[i]);
    // }

    // Question 7. Solve Q-5 using typedef keyword
    // com c1;
    // c1.k = 321.12;
    // printf("%.3f\n",c1.k);

    // Question 8. Create a structure representing a bank account of a customer. What fields do you use and why?
    // bnk customer[5];
    // int num;
    // printf("Enter the amount of customer : ");
    // scanf("%d", &num);
    // for (int i = 0; i < num; i++)
    // {
    //     printf("Enter name of customer %d : ", i + 1);
    //     // gets(customer[i].name);
    //     scanf("%s",customer[i].name);
    //     printf("Enter account number of customer %d : ", i + 1);
    //     scanf("%d", &customer[i].account);
    //     printf("Enter IFSC code of customer %d : ", i + 1);
    //     scanf("%d", &customer[i].ifsc);
    //     printf("Enter Money of customer %d : ", i + 1);
    //     scanf("%f", &customer[i].money);
    // }
    // printf("Customer Name\t\tAccount No.\tIFSC code\tMoney($)\n");
    // for (int i = 0; i < num; i++)
    // {
    //     printf("%s\t\t\t%d\t\t%d\t\t%.3f\n", customer[i].name, customer[i].account, customer[i].ifsc, customer[i].money);
    // }

    // Question 9. Write a structure capable of storing date. Write a function to compare those date
    // date d[2];
    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Enter Date %d : ", i + 1);
    // scanf("%d", &d[i].dd);
    //     printf("Enter Month %d : ", i + 1);
    //     scanf("%d", &d[i].mm);
    //     printf("Enter Year %d : ", i + 1);
    //     scanf("%d", &d[i].yy);
    // }
    // dateDisplay(d[0]);
    // dateDisplay(d[1]);
    // cmp(d[0], d[1]);

    // Question 10. Solve Q-9 for time using typedef keyword
    // I have already solved it

    return 0;
}
void sumVector(struct vector u, struct vector v)
{
    int sumX, sumY;
    sumX = u.x + v.x;
    sumY = u.y + v.y;
    printf("The new Co-ordinate = (%d,%d)\n", sumX, sumY);
}

void display(struct complexNo k)
{
    printf("The value = %.2f\n", k.c);
}

void dateDisplay(date d)
{
    printf("%d/%d/%d \n", d.dd, d.mm, d.yy);
}
void cmp(date d1, date d2)
{
    if (d1.yy > d2.yy)
    {
        printf("The Higher Date is : ");
        dateDisplay(d1);
    }
    else if (d1.mm > d2.mm)
    {
        printf("The Higher Date is : ");
        dateDisplay(d1);
    }
    else if (d1.dd > d2.dd)
    {
        printf("The Higher Date is : ");
        dateDisplay(d1);
    }
    else if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yy == d2.yy)
    {
        printf("Both Date are same");
    }
    else
    {
        printf("The Higher Date is : ");
        dateDisplay(d2);
    }
}