#include<stdio.h>
#include<conio.h>
int main()
{
int day,month,year;
  printf("enter a Date:\n");
  scanf("%d/%d/%d",&day,&month,&year);
  printf("day-%d,month-%d,year-%d",day,month,year);
  getch();
  return 0;
}
