#include <stdio.h>

int main()
{
    char s1[20];
    int i, len = 0;

    printf("Enter your string : ");
    gets(s1);

    while(s1[len] != '\0'){
        len++;
    }

    printf("The length of your string is %d.", len);
    return 0;
}