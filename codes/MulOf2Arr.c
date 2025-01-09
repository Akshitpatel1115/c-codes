#include <stdio.h>

int main(){
    int i,j,k,r1,c1,r2,c2;
    int a[10][10],b[10][10],mul[10][10];

// taking number of rows and columns in arr
    printf("Enter number of rows and columns in 1st array : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter number of rows and columns in 2nd array : ");
    scanf("%d %d",&r2,&c2);

// check rule ---> column of 1st arr == row of 2nd arr
    while(c1!=r2){
        printf("Error!!, Please enter valid rows and columns!!");
        printf("Enter number of rows and columns in 1st array : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter number of rows and columns in 2nd array : ");
        scanf("%d %d",&r2,&c2);
    }

// user input
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

// Print 1st and 2nd arr
    printf("1st array is : \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd array is : \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

// Multiplication of 2 arr
    for(i=0;i<r1;i++){  // 1st arr rows
        for(j=0;j<c2;j++){  // 2nd arr columns
            for(k=0;k<r2;k++){  // this goes from 2nd arr rows
                mul[i][j] = mul[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

// print multiplication of 2 arr
    printf("Multiplication of 2 array is :\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}