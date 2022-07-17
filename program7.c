#include<stdio.h>
#include<conio.h>

int main()
{
  int a,b,c,d;
  printf("Enter a x^2, x and constant number:\n");
  scanf("%d%d%d",&a,&b,&c);
  d=b*b-4*a*c;
  if(d<0)
  printf("Roots are imaginary");
  if(d==0)
  printf("roots are real and equal");
  if(d>0)
  printf("roots are real and distinct");
  getch();
  return 0;
}
