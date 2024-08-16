#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    printf("In this code i am going to solve problems of 3rd Chap. of Book Let Us C\n");

    // (a) If cost price and selling price of an item are input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
    // float cp, sp, loss, profit;
    // printf("Enter Cost price of the item : ");
    // scanf("%f", &cp);
    // printf("Enter Selling price of the item : ");
    // scanf("%f", &sp);
    // if (cp > sp)
    // {
    //     loss = cp - sp;
    //     printf("You make a loss of %.3f Rs.\n", loss);
    // }
    // else if (cp < sp)
    // {
    //     profit = sp - cp;
    //     printf("You make a profit of %.3f Rs.\n", profit);
    // }
    // else
    // {
    //     printf("Neither you make a loss nor a profit.\n");
    // }

    // (b) Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.
    // int check;
    // printf("Enter a num : ");
    // scanf("%d", &check);
    // if (check % 2 == 0)
    // {
    //     printf("%d is even\n", check);
    // }
    // else
    // {
    //     printf("%d is odd\n", check);
    // }

    // (c) Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Hint: Use the % (modulus) operator)
    // int year;
    // printf("Enter a year : ");
    // scanf("%d", &year);
    // if (year % 4 == 0 && year % 100 != 0)
    // {
    //     printf("%d is a leap year.\n", year);
    // }
    // else
    // {
    //     if (year % 400 == 0)
    //     {
    //         printf("%d is a leap year.\n", year);
    //     }
    //     else
    //     {

    //         printf("%d is not a leap year\n", year);
    //     }
    // }

    // (d) According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.
    // int year, days = 0, n1, n2;
    // printf("Enter a year : ");
    // scanf("%d", &year);
    // if (year > 2001)
    // {
    //     for (int i = 2001; i < year; i++)
    //     {
    //         if (i % 4 == 0 && i % 100 != 0)
    //         {
    //             days = days + 366;
    //         }
    //         else
    //         {
    //             if (year % 400 == 0)
    //             {
    //                 days = days + 366;
    //             }
    //             else
    //             {
    //                 days = days + 365;
    //             }
    //         }
    //     }
    //     days++;
    //     n1 = days % 7;
    // }
    // else if (year < 2001)
    // {
    //     for (int i = year; i < 2001; i++)
    //     {
    //         if (i % 4 == 0 && i % 100 != 0)
    //         {
    //             days = days + 366;
    //         }
    //         else
    //         {
    //             if (i % 400 == 0)
    //             {
    //                 days = days + 366;
    //             }
    //             else
    //             {
    //                 days = days + 365;
    //             }
    //         }
    //     }
    //     days++;
    //     n2 = days % 7;
    // }
    // if (n1 == 1 || n2 == 1)
    // {
    //     printf("On 01 / 01 / %d, It was Monday\n", year);
    // }
    // else if (n1 == 2 || n2 == 0)
    // {
    //     printf("On 01 / 01 / %d, It was Tuesday\n", year);
    // }
    // else if (n1 == 3 || n2 == 6)
    // {
    //     printf("On 01 / 01 / %d, It was Wednesday\n", year);
    // }
    // else if (n1 == 4 || n2 == 5)
    // {
    //     printf("On 01 / 01 / %d, It was Thursday\n", year);
    // }
    // else if (n1 == 5 || n2 == 4)
    // {
    //     printf("On 01 / 01 / %d, It was Friday\n", year);
    // }
    // else if (n1 == 6 || n2 == 3)
    // {
    //     printf("On 01 / 01 / %d, It was Saturday\n", year);
    // }
    // else if (n2 == 2 || n1 == 0)
    // {
    //     printf("On 01 / 01 / %d, It was Sunday\n", year);
    // }

    // (e) A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.
    // int rev = 0, num;
    // printf("Enter a five digit number : ");
    // scanf("%d", &num);
    // int r = num;
    // while(num != 0){
    //     rev = rev + num % 10;
    //     rev *= 10;
    //     num /= 10;
    // }
    // rev /= 10;
    // num = r;
    // printf("The Reversed number = %d\n", rev);
    // if (rev == num)
    // {
    //     printf("Both num. are equal\n");
    // }
    // else
    // {
    //     printf("Both num. are not equal\n");
    // }

    // (f) If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
    // int ram, shayam, ajay;
    // printf("Enter the age of Ram, Shayam and Ajay : \n");
    // scanf("%d %d %d", &ram, &shayam, &ajay);
    // if (ram < shayam && ram < ajay)
    // {
    //     printf("Ram is youngest\n");
    // }
    // else if (shayam < ram && shayam < ajay)
    // {
    //     printf("Shayam is younger\n");
    // }
    // else if (ajay < ram && ajay < shayam)
    // {
    //     printf("Ajay is younger\n");
    // }
    // else
    // {
    //     printf("Either two or both are of same age\n");
    // }

    // (g) Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
    // int one, two, three;
    // printf("Enter the angles of a triangle : \n");
    // scanf("%d %d %d", &one, &two, &three);
    // if ((one + two + three) == 180)
    // {
    //     printf("Yes, it is a triangle\n");
    // }
    // else
    // {
    //     printf("No, it is not a triangle.\n");
    // }

    // (h) Write a program to find the absolute value of a number entered through the keyboard.
    // float a;
    // printf("Enter a number : ");
    // scanf("%f",&a);
    // if(a<0){
    //     printf("Value of a = %.2f and the absolute value = %.2f",a,(a*-1));
    // }
    // else if(a>0){
    //     printf("Value of a = %.2f and the absolute value = %.2f",a,a);
    // }
    // else{
    //     printf("The absolute value = 0");
    // }

    // (i) Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.
    // int l, b, ar, pe;
    // printf("Enter the length and breadth of the Rectangle\n");
    // scanf("%d %d",&l,&b);
    // ar = l * b;
    // pe = 2*(l+b);
    // if(ar>pe){
    //     printf("Area i.e %d is greater than perimeter i.e %d \n",ar,pe);
    // }
    // else{
    //     printf("Area i.e %d is less than perimeter i.e %d \n",ar,pe);
    // }

    // (j) Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
    // float x1, x2, x3, y1, y2, y3, m1, m2, m3;
    // printf("Enter the co-ordinate (x1, y1) : \n");
    // scanf("%f %f", &x1, &y1);
    // printf("Enter the co-ordinate (x2, y2) : \n");
    // scanf("%f %f", &x2, &y2);
    // printf("Enter the co-ordinate (x3, y3) : \n");
    // scanf("%f %f", &x3, &y3);
    // m1 = (y2 - y1) / (x2 - x1);
    // m2 = (y3 - y1) / (x3 - x1);
    // m3 = (y3 - y2) / (x3 - x2);
    // printf("%.3f, %.3f, %.3f\n", m1, m2, m3);
    // if (m1 == m2 == m3)
    // {
    //     printf("Yes, (%.2f, %.2f), (%.2f, %.2f) and (%.2f, %.2f) are co-ordinate of a straight line\n", x1, y1, x2, y2, x3, y3);
    // }
    // else
    // {
    //     printf("No, (%.2f, %.2f), (%.2f, %.2f) and (%.2f, %.2f) are not the co-ordinate of a straight line\n", x1, y1, x2, y2, x3, y3);
    // }

    // (k) Given the coordinates (x, y) of center of a circle and its radius, write a program that will determine whether a point lies inside the circle, on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) functions)
    // float x, y, rSq = 16;
    // printf("Enter the quardinate (X, Y) : \n");
    // scanf("%f %f", &x, &y);
    // if ((pow(x, 2) + pow(y, 2)) > rSq)
    // {
    //     printf("Point (%.1f, %.1f) lies outside the circle\n", x, y);
    // }
    // else if ((pow(x, 2) + pow(y, 2)) == rSq)
    // {
    //     printf("Point (%.1f, %.1f) lies on the circle\n", x, y);
    // }
    // else
    // {
    //     printf("Point (%.1f, %.1f) lies inside the circle\n", x, y);
    // }

    // (l) Given a point (x, y), write a program to find out if it lies on the Xaxis, Y-axis or on the origin.
    // float p1, p2;
    // printf("Enter the co-ordinates of a point (p1, p2) : \n");
    // scanf("%f %f", &p1, &p2);
    // if (p1 == 0 && p2 == 0)
    // {
    //     printf("Co-ordinate (%.2f, %.2f) lies on orgin\n", p1, p2);
    // }
    // else if (p1 == 0 && p2 != 0)
    // {
    //     printf("Co-ordinate (%.2f, %.2f) lies on Y-axis\n", p1, p2);
    // }
    // else if (p1 != 0 && p2 == 0)
    // {
    //     printf("Co-ordinate (%.2f, %.2f) lies on X-axis\n", p1, p2);
    // }
    // else
    // {
    //     printf("Co-ordinate (%.2f, %.2f) doesn't lie on any axis\n", p1, p2);
    // }

    return 0;
}
