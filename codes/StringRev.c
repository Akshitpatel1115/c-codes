#include <stdio.h>

int main()
{
    char s1[50];
    int i,len = 0;

    printf("Enter your string : ");
    gets(s1);

    while(s1[len] != '\0'){
        len++;
    }

    for(i = len;i >= 0;i--){
        printf("%c",s1[i]);
    }
    return 0;
}