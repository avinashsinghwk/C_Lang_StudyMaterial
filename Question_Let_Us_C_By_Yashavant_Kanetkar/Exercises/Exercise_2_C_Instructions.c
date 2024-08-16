#include <stdio.h>
#include <math.h>
int main()
{
    printf("In this code we are going to solve Exercise 2 Word Problems\n");

    // (a) If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)
    // long digit;
    // int sum = 0;
    // printf("Enter a five digit number : ");
    // scanf("%d", &digit);
    // for (int i = 0; i < 5; i++)
    // {
    //     sum = sum + digit % 10;
    //     digit = digit /10;
    // }
    // printf("The sum of all the digits = %d\n",sum);

    // (b) If a five-digit number is input through the keyboard, write a program to reverse the number.
    // long num, rev = 0;
    // printf("Enter a five digit num : ");
    // scanf("%d", &num);
    // for (int i = 0; i < 5; i++)
    // {
    //     rev = rev + (num % 10);
    //     num /= 10;
    //     rev *= 10;
    // }
    // printf("The reversed number = %d", rev / 10);

    // (c) If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.
    // float s1, s2, s3, sem, a;
    // printf("Enter the three sides of a triangle : \n");
    // scanf("%f %f %f", &s1, &s2, &s3);
    // if ((s1 + s2) > s3 && (s1 + s3) > s2 && (s2 + s3) > s1)
    // {
    //     sem = (s1 + s2 + s3) / 2;
    //     a = pow((sem * (sem - s1) * (sem - s2) * (sem - s3)), 0.5);
    //     printf("The Area of the triangle = %.3f\n", a);
    // }
    // else
    // {
    //     printf("This is not a Triangle\n");
    // }

    // (d) Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r, z). Hint: r = sqrt ( x^2+ y^2) and z = tan-1( y / x )
    // float x, y, r, z;
    // printf("Enter the X and Y Co-ordinate (X, Y) :\n");
    // scanf("%f %f",&x,&y);
    // r = pow((x*x+y*y),0.5);
    // z = atan(y/x);
    // printf("The new Co-ordinate (R, Z) = (%.3f, %.3f)\n",r,z);

    // (e) Write a program to receive values of latitude (L1, L2) and longitude (G1, G2), in degrees, of two places on the earth and output the distance (D) between them in nautical miles. The formula for distance in nautical miles is: D = 3963 cos-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )
    // float l1, l2, g1, g2, d;
    // printf("Enter the value of Latitude (L1, L2) in deg. : \n");
    // scanf("%f %f", &l1, &l2);
    // printf("Enter the value of Langitude (G1, G2) in deg. : \n");
    // scanf("%f %f", &g1, &g2);
    // d = 3963 * acos(sin(l1) * sin(l2) + (cos(l1) * cos(l2) * (cos(g2 - g1))));
    // printf("The Distance between is %.4f miles.\n",d);

    // (f) Wind chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature, and is calculated as per the following formula: wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v ^ 0.16 where t is the temperature and v is the wind velocity. Write a program to receive values of t and v and calculate wind chill factor (wcf).
    // float velocity, temp, wcf;
    // printf("Enter the Velocity of the Wind (in miles / hour): ");
    // scanf("%f",&velocity);
    // printf("Enter the temperature (in fah.) : ");
    // scanf("%f",&temp);
    // wcf = 35.74 + 0.6215 * temp + (0.4275 * temp - 35.75) * pow(velocity,0.16);
    // printf("The Wind chill factor = %.4f\n",wcf);

    // (g) If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.
    // float deg;
    // printf("Enter an angle in deg. : ");
    // scanf("%f",&deg);
    // printf("Sin(%.3f) = %.3f\n",deg,sin(deg));
    // printf("Cos(%.3f) = %.3f\n",deg,cos(deg));
    // printf("Tan(%.3f) = %.3f\n",deg,tan(deg));
    // printf("Cosec(%.3f) = %.3f\n",deg,(1/sin(deg)));
    // printf("Cot(%.3f) = %.3f\n",deg,(1/tan(deg)));
    // printf("Sec(%.3f) = %.3f\n",deg,(1/cos(deg)));

    // (h) Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
    // int C, D, temp;
    // printf("Enter the value of C and D : \n");
    // scanf("%d %d",&C,&D);
    // temp = C;
    // C = D;
    // D = temp;
    // printf("Now After Interchanging C = %d and D = %d\n",C,D);

    // (i) Consider a currency system in which there are notes of seven denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.
    // int rupee, quan;
    // printf("Enter the money you want : ");
    // scanf("%d", &rupee);
    // if (rupee >= 100)
    // {
    //     quan = rupee / 100;
    //     rupee %= 100;
    //     quan = quan + rupee / 50;
    //     rupee %= 50;
    //     quan = quan + rupee / 10;
    //     rupee %= 10;
    //     quan = quan + rupee / 5;
    //     rupee %= 5;
    //     quan = quan + rupee / 2;
    //     rupee %= 2;
    //     quan = quan + rupee / 1;
    // }
    // else if (rupee < 100 && rupee >= 50)
    // {
    //     quan = rupee / 50;
    //     rupee %= 50;
    //     quan = quan + rupee / 10;
    //     rupee %= 10;
    //     quan = quan + rupee / 5;
    //     rupee %= 5;
    //     quan = quan + rupee / 2;
    //     rupee %= 2;
    //     quan = quan + rupee / 1;
    // }
    // else if (rupee < 50 && rupee >= 10)
    // {
    //     quan = rupee / 10;
    //     rupee %= 10;
    //     quan = quan + rupee / 5;
    //     rupee %= 5;
    //     quan = quan + rupee / 2;
    //     rupee %= 2;
    //     quan = quan + rupee / 1;
    // }
    // else if (rupee < 10 && rupee >= 5)
    // {
    //     quan = rupee / 5;
    //     rupee %= 5;
    //     quan = quan + rupee / 2;
    //     rupee %= 2;
    //     quan = quan + rupee / 1;
    // }
    // else if (rupee < 5 && rupee >= 2)
    // {
    //     quan = rupee / 2;
    //     rupee %= 2;
    //     quan = quan + rupee / 1;
    // }
    // else
    // {
    //     quan = 1;
    // }
    // printf("The total no. of note you need is %d\n", quan);

    return 0;
}
