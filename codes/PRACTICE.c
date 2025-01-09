// (1) WAP to print table of given number.

/*#include<stdio.h>

int main ()
{
    int num,sum;
    printf("Enter Natural Number : ");
    scanf("%d",&num);

    for(int i=1;i<=10;i++){
        sum = num * i;
        printf("%d * %d = %d\n",num,i,sum);
    }
    return 0;
} */

// (2) WAP to print table in reversed order.

/*#include <stdio.h>

int main ()
{
    int num,sum;
    printf("Enter Nutural number : ");
    scanf("%d",&num);

    for(int i=10;i>0;i--){
        sum = num * i;
        printf("%d * %d = %d\n",num,i,sum);
    }
    return 0;
} */

// (3) WAP to print sum of first n natural numbers.(using while loop)

/*#include <stdio.h>

int main ()
{
    int i,sum;
    i=0;
    sum=0;

    while (i<=10){
        sum+=i;
        i++;
    }
    printf("The sum of 10 nutural number is %d",sum);
    return 0;
} */

// (4) solve question 3 by using do while loop.

/*#include <stdio.h>

int main ()
{
    int i=0,sum=0;

    do
    {
        sum+=i;
        i++;
    } while (i<=5);
    printf("The sum of 5 nutural number is %d",sum);
    return 0;
} */

// (5) solve question 3 by using for loop.

/*#include <stdio.h>

int main(){
    int sum=0;

    for(int i=0;i<=5;i++){
        sum+=i;
    }
    printf("The sum of 5 nutural number is %d",sum);
    return 0;
} */

// (6) WAP to sum the value of table 8.

// #include <stdio.h>

// int main(){
//     int i,sum=0;

//     for(i=1;i<=10;i++){
//         sum = sum + (8*i);
//     }
//     printf("The sum of table 8 is %d",sum);
//     return 0;
// }

// (7) WAP to calculate the factorial of given number.

// #include <stdio.h>

// int main(){
//     int product=1;
//     int n = 1;

//     for(int i = 1;i<=n;i++){
//         product*=i;
//     }
//     printf("The factorial is %d",product);
//     return 0;
// }

// (8) solve que 7 using while loop.

// #include <stdio.h>

// int main(){
//     int i = 1, n = 5, product = 1;
//     while (i<=n){
//         product*=i;
//         i++;
//     }
//     printf("The factorial is %d",product);
//     return 0;
// }

// (9) WAP to cheak number is prime or not.

#include <stdio.h>

int main()
{
    int n;
    int prime = 0;

    printf("Enter your number : ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
        }}
        if (prime == 1)
        {
            printf("%d is not prime", n);
        }
        else
        {
            printf("%d is prime", n);
        }
        return 0;
  }

// (10) solve que 9 by using while loop.

// #include <stdio.h>

// int main()
// {
//     int n = 13;
//     int prime = 0;

//     if (n == 0 || n == 1)
//     {
//         prime = 1;
//     }
//     else
//     {
//         int i = 2;
//         while (i < n)
//         {
//             if (n % i == 0 && n != 2)
//             {
//                 prime = 1;
//                 break;
//             }
//             i++;
//         }}
//         if (prime == 1)
//         {
//             printf("%d is not prime", n);
//         }
//         else
//         {
//             printf("%d is prime", n);
//         }
//         return 0;
//   }

// (11) solve que 9 using do-while loop.

// #include <stdio.h>

// int main()
// {
//     int n = 13;
//     int prime = 0;

//     if (n == 0 || n == 1)
//     {
//         prime = 1;
//     }
//     else
//     {
//         int i = 2;
//         do
//         {
//             if (n % i == 0 && n != 2)
//             {
//                 prime = 1;
//                 break;
//             }
//             i++;
//         } while (i < n);
//     }
//     if (prime == 1)
//     {
//         printf("%d is not prime", n);
//     }
//     else
//     {
//         printf("%d is prime", n);
//     }
//     return 0;
// }