#include<stdio.h>
#include<conio.h>

int main()
{
  int i,n;
  printf("Enter a number:\n");
  scanf("%d",&n);

  for(i=1;n>=i;n--)
  {
  printf("%d ",2*n-1);
  }
getch();
return 0;
}
