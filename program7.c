#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
num=num&1;
printf("Lsb is %d",num);
getch();
return 0;
}
