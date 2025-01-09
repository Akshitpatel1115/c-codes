#include <stdio.h>
#include <string.h>
int main(){
    char arr[3][10] = {"Geek","Geeks","Geekfor"}; // 3 is row & 10 is column
    int i;
    printf("string array element are : \n");

    for (i=0;i<3;i++)
        printf("%s\n",arr[i]);
    return 0;
}