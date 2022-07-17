#include<stdio.h>
#include<conio.h>

int main()
{
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  if(num&1)
  printf("%d is a odd number",num);
  else
  printf("%d is a even number",num);
  getch();
  return 0;
  }
