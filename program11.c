#include<stdio.h>
#include<conio.h>
int main()
{
  int hour,minute;
  printf("enter a time:\n");
  scanf("%d:%d/",&hour,&minute);
  printf("%d Hour and %d Minute",hour,minute);
  getch();
  return 0;
}
