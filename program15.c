#include<stdio.h>
#include<conio.h>

int main()
{
  int num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  if(num>0)
  printf("%d is a positive number",num);
  else
  {
    if(num<0)
   printf("%d is a negative number",num);
    else
   printf("number is zero");
  }
  getch();
  return 0;
}
