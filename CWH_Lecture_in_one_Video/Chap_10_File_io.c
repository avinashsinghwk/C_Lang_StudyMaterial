#include <stdio.h>
int main()
{
    printf("In this lecture we will be learning about File.io\n");

    FILE *ptr;

    // ptr = fopen("Chap_10_read.txt", "r"); // For reading the file
    // ptr = fopen("Chap_10_read.txt", "rb"); // For reading the file in binary
    // ptr = fopen("Chap_10_read.txt", "w"); // For writing the file
    // ptr = fopen("Chap_10_read.txt", "wb"); // For writing the file in binary

    // ptr = fopen("Sample2.txt","w");

    // Reading a file
    // int num, num2;
    // ptr = fopen("Chap_10_read.txt","r");
    // fscanf(ptr,"%d",&num);
    // fscanf(ptr,"%d",&num2);
    // fclose(ptr);
    // printf("The value of num is %d\n",num);
    // printf("The value of num2 is %d\n",num2);

    // Quick Quiz: Modify the program above to check whether the file exist or not before opening the file
    // ptr= fopen("babu.txt","r");
    // if(ptr == NULL){
    //     printf("The File you are looking for doesn't exist\n");
    // }
    // else{
    //     printf("File Found\n");
    // }

    // Writing a file
    // char s[] = "Avinash Kuamr Singh";
    // ptr = fopen("Chap_10_write.txt","w");
    // fprintf(ptr,"My name is %s.\n",s);
    // fprintf(ptr,"Thank You for Writing");
    // fclose(ptr);

    FILE *poi;

    // fgetc() is used a read a character from the file
    // poi = fopen("Chap_10_read.txt","r");
    // printf("The value of my character c is %c\n",fgetc(poi));
    // printf("The value of my character c is %c\n",fgetc(poi));
    // printf("The value of my character c is %c\n",fgetc(poi));
    // printf("The value of my character c is %c\n",fgetc(poi));
    // fclose(poi);

    // fputc() is used a write character from the file
    // poi = fopen("Chap_10_write.txt","w");
    // fputc('b',poi);
    // fclose(poi);

    // End of File : EOF
    // poi = fopen("Chap_10_read.txt", "r");
    // char ch = getc(poi);
    // while (ch != EOF)
    // {
    //     printf("%c", ch);
    //     ch = fgetc(poi);
    // }
    // fclose(poi);


    return 0;
}