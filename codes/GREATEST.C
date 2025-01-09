#include <stdio.h>
#include <conio.h>

void main ()
{
  int a,b,c,d;
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  printf("c = ");
  scanf("%d",&c);
  printf("d = ");
  scanf("%d",&d);

  if (a>b && a>c && a>d)
     printf("a is greatest.");
  else if(b>a && b>c && b>d)
     printf("b is greatest.");
  else if(c>a && c>b && c>d)
     printf("c is greatest.");
  else
     printf("d is greatest.");
  getch();
}