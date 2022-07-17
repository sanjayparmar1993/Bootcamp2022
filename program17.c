#include<stdio.h>
#include<conio.h>

int main()
{
  int a,b,c;
  printf("Enter a sides:\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b>c&&a+c>b&&b+c>a)
  printf("valid triangle");
  else
  printf("invalid triangle");
  getch();
  return 0;
  }
