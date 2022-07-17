#include<stdio.h>
#include<conio.h>

int main()
{
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  if(num>99 && num<1000)
  printf("%d is a three digit number",num);
  else
  printf("%d is not three digit number",num);
  getch();
  return 0;
  }
