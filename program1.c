#include<stdio.h>
#include<conio.h>
int main()
{
  int x;
  printf("Enter a number:\n");
  scanf("%d",&x);
  x=x%10;
  printf("unit digit is %d",x);
  getch();
  return 0;
}
