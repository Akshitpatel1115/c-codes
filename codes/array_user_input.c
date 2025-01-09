#include <stdio.h>

int main(){
    int arr[100],i,n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);

    printf("Enter array elements : ");
    for(i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Accesing array elements : ");
    for(i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}