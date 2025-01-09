#include <stdio.h>

int main(){
    int n,rem = 0,arm = 0,tem;
    printf("Enter n = ");
    scanf("%d",&n);

    tem = n;
    while(n!=0){
        rem = n % 10;
        arm = arm + (rem*rem*rem);
        n/=10;
    } 

    if(tem == arm){
        printf("\n number is armstrong!");
    }
    else{
        printf("\n number is not armstrong!");
    }
    return 0;
}