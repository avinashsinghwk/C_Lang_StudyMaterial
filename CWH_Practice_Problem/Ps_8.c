#include <stdio.h>
#include <string.h>
void slice(char st[], int a, int b);
int main()
{
    printf("In this lecture we will be solving practice problem 8\n");

    // Question 1. What is the appropriate thing to read a multi words string
    // gets()

    // Question 2. Write a program to take string as an user input using %c and %s find out if the both string are equal or not
    // char s[15], s2[15], c;
    // int i = 0;
    // printf("Enter a String : ");
    // scanf("%s", s);
    // printf("Enter a String : \n");
    // while (c != '\n')
    // {
    //     fflush(stdin);
    //     scanf("%c", &c);
    //     s2[i] = c;
    //     i++;
    // }
    // s2[i-1] = '\0';
    // printf("%s\n",s2);
    // printf("%s\n",s);
    // if (strcmp(s, s2) == 0)
    // {
    //     printf("Yes, Both String are equal\n");
    // }
    // else
    // {
    //     printf("No, String are different");
    // }

    // Question 3. Write your own version for strlen function
    // int l= 0;
    // char s[15] = "Avina Kumih";
    // char *ptr = s;
    // while(*ptr != '\0'){
    //     l++;
    //     ptr++;
    // }
    // printf("The length of the string is %d\n",l);

    // Question 4. Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take a and b as the starting and ending position for slice
    // char st[10];
    // printf("Enter a string : ");
    // scanf("%s", st);
    // slice(st, 1, 5);

    // Question 5. Write your own version for strcpy function
    // char st[20], st2[20];
    // printf("Enter a String : ");
    // gets(st);
    // for (int i = 0; i < strlen(st); i++)
    // {
    //     st2[i] = st[i];
    // }
    // printf("st2 = %s\n", st2);

    // Question 6. Write a program to encrypt a string by adding 1 to the ascii value of it's character
    // char st[20];
    // printf("Enter a String : ");
    // gets(st);
    // for (int i = 0; i < strlen(st); i++)
    // {
    //     st[i] = st[i] + 1;
    // }
    // printf("The Encrypted String = %s\n", st);

    // Question 7. Write a program to decrypt the string encrypted using encrypt function in Q-6
    // for (int i = 0; i < strlen(st); i++)
    // {
    //     st[i] = st[i] - 1;
    // }
    // printf("The Decrypted String = %s\n", st);

    // Question 8. Write a program to count the occurance of a character.
    // char st[20], ch;
    // int a = 0;
    // printf("Enter a String : ");
    // gets(st);
    // printf("Enter a Character : ");
    // scanf("%c", &ch);
    // for (int i = 0; i < strlen(st); i++)
    // {
    //     if (st[i] == ch)
    //     {
    //         a++;
    //     }
    // }
    // printf("The total occurance of character %c in string %s is %d", ch, st, a);

    // Question 9. Write a program to find a given character is present in the string or not
    // char st[20], st2;
    // int a = 0;
    // printf("Enter a String : ");
    // gets(st);
    // printf("Enter the character : ");
    // scanf("%c", &st2);
    // for (int i = 0; i < strlen(st); i++)
    // {
    //     if (st[i] == st2)
    //     {
    //         a++;
    //     }
    // }
    // if (a == 0)
    // {
    //     printf("NO, %c is not present inside the string : %s\n", st2, st);
    // }
    // else
    // {
    //     printf("Yes %c is present inside the string : %s\n", st2, st);
    // }

    return 0;
}
void slice(char st[], int a, int b)
{
    char st2[10];
    int k = 0;
    for (int i = a; i < b; i++)
    {
        st2[k] = st[i];
        k++;
    }
    st2[k] = '\0';
    printf("The sliced String = %s", st2);
}