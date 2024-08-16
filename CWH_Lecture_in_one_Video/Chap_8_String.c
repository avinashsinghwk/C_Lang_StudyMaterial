#include <stdio.h>
#include <string.h>
int main()
{
    printf("In this lecture we will be learning about String\n");

    // char str[] = {'A', 'v', 'i', 'n', 'a', 's', 'h','\0'};
    // char str[] = "Avinash";
    // char str[] = "JagMohan";  // can not do that because a string can not be initialized when it is initialized first 

    // Quick Quiz: Create a string using "" and print it's content using loop
    // char *ptr = str;
    // while(*ptr != '\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    // }
    // }

    // char *ptr = "Avinash Singh";
    // printf("%s\n", ptr);
    // printf("%s\n", str);

    // Taking User Input String
    // char s[20];
    // printf("Input String : ");
    // scanf("%s", s);  // only take the one word
    // gets(s);         // can take more than one word
    // puts(s);         // print a string
    // printf("%s", s);

    // Declaring a string using pointer
    char *ptr = "Aviansh Kumar";
    ptr = "Kumar Avinash"; // We can do that because a pointer can be initialized when it is initialized first 
    printf("%s\n",ptr);

    // String Library Function

    // strlen()
    // char s[] = "Avinash Kumar Sigh";
    // char *ptr;
    // ptr = s;
    // printf("The length of the string is %d\n",strlen(s));
    // int c = 0;
    // while(*ptr != '\0'){
    //      c++;
    //      ptr++;
    // }
    // printf("The length of the strign = %d\n",c);

    // strcpy()
    // char *st = "This", st2[10];
    // strcpy(st2,st);
    // printf("st2 = %s\n",st2);
    
    // strcat()
    // char str[11] = "Avin", str2[5] = "ash";
    // strcat(str,str2);
    // printf("%s\n",str);

    // strcmp()
    // char st[] = "Far", st2[] = "Joke";
    // int i = strcmp(st,st2);
    // printf("The value of i is %d\n",i);



    return 0;
}