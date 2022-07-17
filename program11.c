#include<stdio.h>
#include<conio.h>

int main()
{
  int sub1,sub2,sub3,sub4,sub5;
  printf("Enter a marks:\n");
  scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
  if(sub1>=33&&sub2>=33&&sub3>=33&&sub4>=33&&sub5>=33)
     printf("candidate is pass");
  else
    printf("candidate is fail");
  getch();
  return 0;

}
