#include <stdio.h>
#include <math.h>

void sumAvgStd(int a, int b, int c, int d, int e, int *sum, float *avg, float *stdDev);
void avgPerc(int marks1, int marks2, int marks3, float *avg, float *per);
float evaluate(float x);
float factorial(float n);
void circularShift(int *x, int *y, int *z);
int TriangleChecker(float a, float b, float c);
float areaT(float x, float y, float z);
float disBetPoints(float x1, float y1, float x2, float y2);
void TriangleChecker2(float x1, float y1, float x2, float y2, float x3, float y3);
void pointChecker(float x1, float y1, float x2, float y2, float x3, float y3);

int main()
{
    printf("In this code i am going to solve exercise based on pointers\n");

    // (a) Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers. Call this function from main( ) and print the results in main( ).
    // int a, b, c, d, e, sum;
    // float avg, stdDev;
    // printf("Enter 5 number : \n");
    // scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    // sumAvgStd(a, b, c, d, e, &sum, &avg, &stdDev);
    // printf("The sum = %d\tThe avg = %.2f\tThe stdDev = %.2f",sum, avg, stdDev);

    // (b) Write a function that receives marks received by a student in 3 subjects and returns the average and percentage of these marks. Call this function from main( ) and print the results in main( ).
    // int marks1, marks2, marks3;
    // float avg, per;
    // printf("Enter the marks in 3 subjects : \n");
    // scanf("%d %d %d", &marks1, &marks2, &marks3);
    // avgPerc(marks1, marks2, marks3, &avg, &per);
    // printf("The average got = %.2f\n", avg);
    // printf("The percentage got = %.2f\n", per);

    // (c) Write a C function to evaluate the series sin(x) = x - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ... up to 10 terms.
    // float x;
    // printf("Enter the value of x : ");
    // scanf("%f", &x);
    // float ans = evaluate(x);
    // printf("The answer = %.3f\n", ans);

    // (d) Given three variables x, y, z write a function to circularly shift their values to right. In other words if x = 5, y = 8, z = 10, after circular shift y = 5, z = 8, x =10. Call the function with variables a, b, c to circularly shift values.
    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // printf("The value of a = %d, b = %d and c = %d before calling function\n",a, b, c);
    // circularShift(&a, &b, &c);
    // printf("The value of a = %d, b = %d and c = %d after calling function\n",a, b, c);

    // (e) If the lengths of the sides of a triangle are denoted by a, b, and c, then area of triangle is given by area = root under S(S - a)(S - b)(S - c) where, S = ( a + b + c ) / 2. Write a function to calculate the area of the triangle.
    // float a, b, c;
    // scanf("%f %f %f", &a, &b, &c);
    // if (TriangleChecker(a, b, c) == 0)
    // {
    //     printf("Triangle is not valid\n");
    // }
    // else
    // {
    //     float area = areaT(a, b, c);
    //     printf("The area of triangle = %.2f", area);
    // }

    // (f) Write a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use these functions to develop a function which returns a value 1 if the point (x, y) lines inside the triangle ABC, otherwise returns a value 0.
    // float x1, x2, y1, y2, x3, y3, dis;
    // printf("Enter the Co-ordinate of (x1, y1) : \n");
    // scanf("%f %f", &x1, &y1);
    // printf("Enter the Co-ordinate of (x2, y2) : \n");
    // scanf("%f %f", &x2, &y2);
    // printf("Enter the Co-ordinate of (x3, y3) : \n");
    // scanf("%f %f", &x3, &y3);
    // dis = disBetPoints(x1, y1, x2, y2);
    // printf("The distance b/w the points (%.1f, %.1f) and (%.1f, %.1f) is %.2f\n", x1, y1, x2, y2, dis);
    // TriangleChecker2(x1, y1, x2, y2, x3, y3);

    // (g) Write a function to compute the greatest common divisor given by Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
    // 1980 / 1617 = 1,  1980 - 1 * 1617 = 363
    // 1617 / 363 = 4,  1617 - 4 * 363 = 165
    // 363 / 165 = 2,  363 - 2 * 165 = 33
    // 5 / 33 = 5,  165 - 5 * 33 = 0 Thus, the greatest common divisor is 33.

    // sirf question g nahi bna hai

    return 0;
}
void sumAvgStd(int a, int b, int c, int d, int e, int *sum, float *avg, float *stdDev)
{
    *sum = a + b + c + d + e;
    *avg = *sum / 5;
    a = (a - *avg) * (a - *avg);
    b = (b - *avg) * (b - *avg);
    c = (c - *avg) * (c - *avg);
    d = (d - *avg) * (d - *avg);
    e = (e - *avg) * (e - *avg);
    *stdDev = sqrt((a + b + c + d + e) / 4);
}

void avgPerc(int marks1, int marks2, int marks3, float *avg, float *per)
{
    *avg = (marks1 + marks2 + marks3) / 3.0;
    *per = *avg;
}

float evaluate(float x)
{
    float ans = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            ans = ans + (pow(x, (2 * i - 1)) / factorial(2 * i - 1));
        }
        else
        {
            ans = ans - (pow(x, (2 * i - 1)) / factorial(2 * i - 1));
        }
    }
    return ans;
}
float factorial(float n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

void circularShift(int *x, int *y, int *z)
{
    int temp;
    temp = *y;
    *y = *x;
    int temp2;
    temp2 = *z;
    *z = temp;
    *x = temp2;
}

int TriangleChecker(float a, float b, float c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float areaT(float x, float y, float z)
{
    float s = (x + y + z) / 2.0;
    s = s * (s - x) * (s - y) * (s - z);
    return sqrt(s);
}

float disBetPoints(float x1, float y1, float x2, float y2)
{
    float dis = (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    return dis;
}

void TriangleChecker2(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a = disBetPoints(x1, y1, x2, y2);
    float b = disBetPoints(x1, y1, x3, y3);
    float c = disBetPoints(x2, y2, x3, y3);
    if (TriangleChecker(a, b, c) == 0)
    {
        printf("Triangle is not valid\n");
    }
    else
    {
        float area = areaT(a, b, c);
        printf("The area of triangle = %.2f\n", area);
        pointChecker(x1, y1, x2, y2, x3, y3);
    }
}

void pointChecker(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float x, y;
    printf("Enter a point (x, y) : \n");
    scanf("%f %f", &x, &y);
    float a = disBetPoints(x1, y1, x2, y2);
    float b = disBetPoints(x1, y1, x3, y3);
    float c = disBetPoints(x2, y2, x3, y3);
    float d = disBetPoints(x, y, x3, y3);
    float e = disBetPoints(x, y, x2, y2);
    float f = disBetPoints(x, y, x1, y1);

    if (areaT(a, b, c) == areaT(b, d, f) + areaT(d, e, c) + areaT(f, e, a))
    {
        printf("(%.1f, %.1f) lies inside the triangle\n", x, y);
    }
    else
    {
        printf("(%.1f, %.1f) lies outside the triangle\n", x, y);
    }
}