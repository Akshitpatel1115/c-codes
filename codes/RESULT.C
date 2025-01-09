#include <stdio.h>
#include <conio.h>

void main()
{
   int maths,ic,cppm,sum;
   printf("Enter Maths Marks : ");
   scanf("%d",&maths);
   printf("Enter Ic Marks : ");
   scanf("%d",&ic);
   printf("Enter Cppm Marks : ");
   scanf("%d",&cppm);

   if (maths<33 || ic<33 || cppm<33)
      printf("You are faild due to less marks in individual subjects\n");
   else if ( (maths + ic + cppm)/3 <40)
      printf("You are faild due to less precentag\n");
   else
      printf("You are passed!");

   getch();
}