/* 3. Write C program that will accept sentence from user and reverse individual word of it. 
Eg: Hello Bye sir 
0/p 
Ris eyb olleh */

#include <stdio.h>

int main()
{
    char s1[50];
    int i,len = 0;

    printf("Enter your sentence : ");
    gets(s1);

    while(s1[len] != '\0'){
        len++;
    }
    printf("Reversed sentence : ");
    for(i = len;i >= 0;i--){
        printf("%c",s1[i]);
    }
    return 0;
}