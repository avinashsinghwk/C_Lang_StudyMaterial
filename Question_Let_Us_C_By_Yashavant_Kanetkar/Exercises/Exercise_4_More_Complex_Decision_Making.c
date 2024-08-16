#include <stdio.h>
#include <math.h>
int main()
{
    printf("In this lecture i am solving 4th Exercise of Let Us C\n");

    // (a) Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and ||.
    // int year;
    // printf("Enter a year : ");
    // scanf("%d", &year);
    // if (year % 4 == 0 && year % 100 != 0)
    // {
    //     printf("%d is a leap year\n", year);
    // }
    // else
    // {
    //     if (year % 400 == 0)
    //     {
    //         printf("%d is a leap year\n", year);
    //     }
    //     else
    //     {
    //         printf("%d is not a leap year\n", year);
    //     }
    // }

    // (b) Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.
    // char character;
    // printf("Enter a character : ");
    // scanf("%c", &character);
    // if (character >= 65 && character <= 90)
    // {
    //     printf("%c is Capital Letter \n",character);
    // }
    // else if (character >= 97 && character <= 122)
    // {
    //     printf("%c is Small Letter \n",character);
    // }
    // else if (character >= 48 && character <= 57)
    // {
    //     printf("%c is a digit\n",character);
    // }
    // else
    // {
    //     printf("%c is a Symbol\n",character);
    // }

    // (c) A certain grade of steel is graded according to the following conditions:(i) Hardness must be greater than 50 (ii) Carbon content must be less than 0.7 (iii) Tensile strength must be greater than 5600 The grades are as follows: Grade is 10 if all three conditions are met, Grade is 9 if conditions (i) and (ii) are met, Grade is 8 if conditions (ii) and (iii) are met, Grade is 7 if conditions (i) and (iii) are met, Grade is 6 if only one condition is met, Grade is 5 if none of the conditions are met Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.
    // float hardness, carbon, tensile;
    // int a = 0;
    // printf("Enter Hardhess, Carbon content and Tensile Strength : \n");
    // scanf("%f %f %f", &hardness, &carbon, &tensile);
    // if (hardness > 50 && carbon < 0.7 && tensile > 5600)
    // {
    //     a = 10;
    // }
    // else if (hardness > 50 && carbon < 0.7)
    // {
    //     a = 9;
    // }
    // else if (carbon < 0.7 && tensile > 5600)
    // {
    //     a = 8;
    // }
    // else if (hardness > 50 && tensile > 5600)
    // {
    //     a = 7;
    // }
    // else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
    // {
    //     a = 6;
    // }
    // else
    // {
    //     a = 5;
    // }
    // printf("The Grade of your steel is %d\n", a);

    // (d) If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides.
    // float a, b, c;
    // printf("Enter the 3 sides of a triangle : \n");
    // scanf("%f %f %f", &a, &b, &c);
    // if (a + b > c && a + c > b && b + c > a)
    // {
    //     printf("%.f, %.f, %.f These are the sides of a triangle\n", a, b, c);
    // }
    // else
    // {
    //     printf("%.f, %.f, %.f These are not the sides of a triangle\n", a, b, c);
    // }

    // (e) If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.
    // float a, b, c;
    // printf("Enter the 3 sides of a triangle : \n");
    // scanf("%f %f %f", &a, &b, &c);
    // if (a + b > c && a + c > b && b + c > a)
    // {
    //     if (a == b && b == c && a == c)
    //     {
    //         printf("%.1f, %.1f, %.1f These are the sides of an Equilateral triangle\n", a, b, c);
    //     }
    //     else if (a == b || b == c || c == a)
    //     {
    //         printf("%.1f, %.1f, %.1f These are the sides of an Isosceles triangle\n", a, b, c);
    //     }
    //     else if (((a * a) + (b * b) == (c * c)) || ((a * a) + (c * c) == (b * b)) || (c * c) + (b * b) == (a * a))
    //     {
    //         printf("%.1f, %.1f, %.1f These are the sides of a Right angle triangle\n", a, b, c);
    //     }
    //     else
    //     {
    //         printf("%.1f, %.1f, %.1f These are the sides of a Scalene triangle\n", a, b, c);
    //     }
    // }
    // else
    // {
    // printf("%.1f, %.1f, %.1f These are not the sides of a triangle\n", a, b, c);
    // }

    // (f) In boxing the weight class of a boxer is decided as per the following table. Write a program that receives weight as input and prints out the boxer’s weight class.
    // int weight;
    // printf("Enter the weight of the boxer : ");
    // scanf("%d", &weight);
    // if (weight < 115)
    // {
    //     printf("The boxer is Flyweight because it's weight is %d Kg.\n", weight);
    // }
    // else if (weight >= 115 && weight <= 121)
    // {
    //     printf("The boxer is Bantamweight because it's weight is %d Kg.\n", weight);
    // }
    // else if (weight >= 122 && weight <= 153)
    // {
    //     printf("The boxer is Featherweight because it's weight is %d Kg.\n", weight);
    // }
    // else if (weight >= 154 && weight <= 189)
    // {
    //     printf("The boxer is Middleweight because it's weight is %d Kg.\n", weight);
    // }
    // else
    // {
    //     printf("The boxer is Heavyweight because it's weight is %d Kg.\n", weight);
    // }

    // (g) In digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-YellowBlack (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae: White = Max(Red / 255,Green / 255,Blue / 255),   Cyan = ((White - (Red/225))/White),  Magenta = ((White - (Green/225))/White), Yellow = ((White - (Blue/225))/White),  Black = 1 - White. Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1
    // int R, G, B;
    // float C, M, Y, K, W, Rd, Gd, Bd;
    // printf("Enter Reg Green Blue (RGB) ratio : \n");
    // scanf("%d %d %d", &R, &G, &B);
    // if (R == 0 && G == 0 && B == 0)
    // {
    //     printf("(RGB) : (%d,%d,%d), (CMYK) : (0,0,0,1)\n", R, G, B);
    // }
    // else if (R >= 0 && R <= 255 && G >= 0 && G <= 255 && B >= 0 && B <= 255)
    // {
    //     Rd = R / 255.0;
    //     Gd = G / 255.0;
    //     Bd = B / 255.0;
    //     W = Rd;
    //     if (W < Gd)
    //     {
    //         W = Gd;
    //     }
    //     if (W < Bd)
    //     {
    //         W = Bd;
    //     }
    //     C = ((W - (R / 255.0)) / W);
    //     M = ((W - (G / 255.0)) / W);
    //     Y = ((W - (B / 255.0)) / W);
    //     K = 1 - W;
    //     printf("(RGB) : (%d, %d, %d), (CMYK) : (%.2f, %.2f, %.2f, %.2f)\n", R, G, B, C, M, Y, K);
    // }
    // else
    // {
    //     printf("(RGB) is invalid!\n");
    // }

    // (h) Write a program that receives month and date of birth as input and prints the corresponding Zodiac sign based on the following table: Sun Sign - Capricorn, Aquarius, Pisces, Aries, Taurus, Gemini,Cancer, Leo, Virgo, Libra, Scorpio, Sagittarius. From - To: December 22 - January 19, January 20 - February 17, February 18 - March 19, March 20 - April 19, April 20 - May 20, May 21 - June 20, June 21 - July 22, July 23 - August 22, August 23 - September 22, September 23 - October 22, October 23 - November 21, November 22 - December 21.
    // int day, month;
    // printf("Enter day and Month (in numb.) of your birht : \n");
    // scanf("%d %d", &day, &month);
    // if (day >= 1 && day <= 31 && month >= 1 && month <= 12)
    // {
    //     if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
    //     {
    //         printf("Your born on %d/%d, so your zordic sign is Capricorn\n", day, month);
    //     }
    //     else if ((month == 1 && day >= 20) || (month == 2 && day <= 17))
    //     {
    //         printf("Your born on %d/%d, so your zordic sign is Aquarius\n", day, month);
    //     }
    //     else if ((month == 2 && day >= 18 && day != 30 && day != 31) || (month == 3 && day <= 19))
    //     {
    //         printf("Your born on %d/%d, so your zordic sign is Pisces\n", day, month);
    // }
    // else if ((month == 3 && day >= 20) || (month == 4 && day <= 19))
    // {
    //     printf("Your born on %d/%d, so your zordic sign is Aries\n", day, month);
    // }
    // else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
    // {
    //     printf("Your born on %d/%d, so your zordic sign is Taurus\n", day, month);
    // }
    // else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
    // {
    //     printf("Your born on %d/%d, so your zordic sign is Gemini\n", day, month);
    // }
    // else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
    // {
    //     printf("Your born on %d/%d, so your zordic sign is Cancer\n", day, month);
    // }
    // else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
    // {
    //     printf("Your born on %d/%d, so your zordic sign is Leo\n", day, month);
    // }
    // else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
    // {
    //     printf("Your born on %d/%d, so your zordic sign is Virgo\n", day, month);
    // }
    // else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
    // {
    //     printf("Your born on %d/%d, so your zordic sign is Libra\n", day, month);
    // }
    // else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
    // {
    //     printf("Your born on %d/%d, so your zordic sign is Scorpio\n", day, month);
    // }
    // else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
    // {
    //     printf("Your born on %d/%d, so your zordic sign is Sagittarius\n", day, month);
    // }
    // }
    // else
    // {
    //     printf("Not valid!\n");
    // }

    // (i) The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms) to the square of the height (in meters). Write a program that receives weight and height, calculates the BMI, and reports the BMI category as per the following table: BMI Category - Starvation, Anorexic, Underweight, Ideal, Overweight, Obese, Morbidly Obese. BMI - < 15, 15.1 to 17.5, 17.6 to 18.5, 18.6 to 24.9, 25 to 25.9, 30 to 30.9, >= 40
    // float w, h, bmi;
    // printf("Enter Weight (in Kg.) and Enter Height (in m) : \n");
    // scanf("%f %f", &w, &h);
    // bmi = (w / (h * h));
    // printf("Your BMI is %.2f\n", bmi);
    // if (bmi < 15)
    // {
    //     printf("This boy is Starving \n");
    // }
    // else if (bmi >= 15.1 && bmi <= 17.5)
    // {
    //     printf("This boy is Anorexic \n");
    // }
    // else if (bmi >= 17.6 && bmi <= 18.5)
    // {
    //     printf("This boy is Underweight \n");
    // }
    // else if (bmi >= 18.6 && bmi <= 24.9)
    // {
    //     printf("This boy is Ideal \n");
    // }
    // else if (bmi >= 25 && bmi <= 25.9)
    // {
    //     printf("This boy is Overweight \n");
    // }
    // else if (bmi >= 30 && bmi <= 39.9)
    // {
    //     printf("This boy is Obese \n");
    // }
    // else
    // {
    //     printf("This boy is Morbidly Obese \n");
    // }

    // (a) Using conditional operators determine:
    // (1) Whether the character entered through the keyboard is a lower case alphabet or not.
    // Already solved in Question - (b)

    // (2) Whether a character entered through the keyboard is a special symbol or not.
    // Already solved in Question - (b)

    // (b) Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.
    // Already solved in Question - (a)

    // (c) Write a program to find the greatest of the three numbers entered through the keyboard. Use conditional operators.
    // float a, b, c;
    // printf("Enter 3 number : \n");
    // scanf("%f %f %f", &a, &b, &c);
    // if (a > b && a > c)
    // {
    //     printf("%.1f is greater\n", a);
    // }
    // else if (b > a && b > c)
    // {
    //     printf("%.1f is greater\n", b);
    // }
    // else if (c > a && c > b)
    // {
    //     printf("%.1f is greater\n", c);
    // }
    // else
    // {
    //     printf("Either two or the both are equal\n");
    // }

    // (d) Write a program to receive value of an angle in degrees and check whether sum of squares of sine and cosine of this angle is equal to 1.
    // float ang1, ang2, n;
    // printf("Enter angles in deg. : \n");
    // scanf("%f %f", &ang1, &ang2);
    // n = (sin(ang1) * sin(ang1)) + (cos(ang2) * cos(ang2));
    // if (n == 1)
    // {
    //     printf("Yes, square of sine and cosine is 1\n");
    // }
    // else
    // {
    //     printf("No, square of sine and cosine is not 1\n");
    // }

    return 0;
}