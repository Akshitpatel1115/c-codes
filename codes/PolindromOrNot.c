#include <stdio.h>

int main(){
    int n,tem,rev=0,rem;
    printf("Enter number : ");
    scanf("%d",&n);

    tem = n;
    while(n!=0){
      rem = n % 10;
      rev =( rev * 10 )+ rem;
      n/=10;
    }
    printf("The reverce number is %d",rev);  
    if(tem == rev){
        printf("\n number is polindrom!");
    }
    else {
        printf("\n number is not polindrom!");
    }
    return 0;
}