#include<stdio.h>
#include<conio.h>

int main()
{
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  if(num>0)
  printf("Number is positive");
  else
  printf("Number is non-positive");
  getch();
  return 0;
}
