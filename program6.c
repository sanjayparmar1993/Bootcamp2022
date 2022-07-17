#include<stdio.h>
#include<conio.h>

int main()
{
  int num1,num2;
  printf("Enter a number:\n");
  scanf("%d%d",&num1,&num2);
  if(num1> num2)
  printf("greater number is %d",num1);
  else
  printf("greater number is %d",num2);
  getch();
  return 0;
  }
