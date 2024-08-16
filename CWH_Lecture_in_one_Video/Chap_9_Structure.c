#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

// Quick Quiz
struct worker
{
    char name[10];
    int id;
    float salary;
    char address[10];
};

typedef struct mobile{
    char owner[10];
    int pin;
}mobi;

void funEmployee(struct employee e);
int main()
{
    printf("In this lecture we will be learning about structure\n");

    // struct employee e1;
    // e1.code = 100;
    // e1.salary = 342.2;
    // strcpy(e1.name, "Avinash");
    // struct employee e2 = {211,345.2,"Punith"};
    // printf("Name\t\tCode\tSalary\n");
    // printf("%s\t\t%d\t%.3f\n", e1.name, e1.code, e1.salary);
    // printf("%s\t\t%d\t%.3f\n", e2.name, e2.code, e2.salary);

    // Quick Quiz: Write a program take input from the user of 3 worker info. using structure
    // struct worker w1, w2, w3;
    // printf("Enter name of worker 1 : ");
    // scanf("%s", w1.name);
    // printf("Enter id of worker 1 : ");
    // scanf("%d", &w1.id);
    // printf("Enter salary of worker 1 : ");
    // scanf("%f", &w1.salary);
    // printf("Enter address of worker 1 : ");
    // scanf("%s", w1.address);
    // printf("Enter name of worker 2 : ");
    // scanf("%s", w2.name);
    // printf("Enter id of worker 2 : ");
    // scanf("%d", &w2.id);
    // printf("Enter salary of worker 2 : ");
    // scanf("%f", &w2.salary);
    // printf("Enter address of worker 2 : ");
    // scanf("%s", w2.address);
    // printf("Enter name of worker 3 : ");
    // scanf("%s", w3.name);
    // printf("Enter id of worker 3 : ");
    // scanf("%d", &w3.id);
    // printf("Enter salary of worker 3 : ");
    // scanf("%f", &w3.salary);
    // printf("Enter address of worker 3 : ");
    // scanf("%s", w3.address);
    // printf("Name\tId\tSalary\tAddress\n");
    // printf("%s\t%d\t%.3f\t%s\n", w1.name, w1.id, w1.salary, w1.address);
    // printf("%s\t%d\t%.3f\t%s\n", w2.name, w2.id, w2.salary, w2.address);
    // printf("%s\t%d\t%.3f\t%s\n", w3.name, w3.id, w3.salary, w3.address);

    // Array of Structure
    // struct worker Systya[5];
    // strcpy(Systya[0].name,"Babu");
    // Systya[0].id = 321;
    // Systya[0].salary = 32.5;
    // strcpy(Systya[0].address,"Rafiganj");
    // printf("%s\t%d\t%.3f\t%s\n",Systya[0].name,Systya[0].id,Systya[0].salary,Systya[0].address);

    // Structure in Memory
    // struct worker w[2];
    // strcpy(w[0].name, "Avinash");
    // w[0].id = 123;
    // w[0].salary = 45.3;
    // strcpy(w[0].address, "Rafiganj");
    // strcpy(w[1].name, "Nuskan");
    // w[1].id = 321;
    // w[1].salary = 67.9;
    // strcpy(w[1].address, "Patna");
    // printf("%s and %u\n", w[0].name, &w[0].name);
    // printf("%d and %u\n", w[0].id, &w[0].id);
    // printf("%.3f and %u\n", w[0].salary, &w[0].salary);
    // printf("%s and %u\n", w[0].address, &w[0].address);
    // printf("%s and %u\n", w[1].name, &w[1].name);
    // printf("%d and %u\n", w[1].id, &w[1].id);
    // printf("%.3f and %u\n", w[1].salary, &w[1].salary);
    // printf("%s and %u\n", w[1].address, &w[1].address);

    // Pointer to Structure
    // struct worker *ptr;
    // ptr = &w;
    // printf("%u\n", ptr);
    // printf("%s\n",(*ptr).name);
    // printf("%d\n",ptr->id);    // Arrow Operator
    // ptr++;
    // printf("%u\n", ptr);
    // printf("%s\n",(*ptr).name);
    // printf("%s\n",ptr->address);

    // Passing structure as argument in a function
    // struct employee e1 = {100, 33.54, "BAbU"};
    // struct employee e2 = {76, 208.2, "Munni"};
    // funEmployee(e1);
    // funEmployee(e2);

    // typedef keyword
    mobi m1 = {"Vansh",211};
    mobi m2 = {"Priya",987};
    printf("Owner : %s\tPin : %d\n",m1.owner,m1.pin);
    printf("Owner : %s\tPin : %d\n",m2.owner,m2.pin);
    

    return 0;
}
void funEmployee(struct employee e)
{
    printf("%s\n", e.name);
    printf("%d\n", e.code);
    printf("%.3f\n", e.salary);
}