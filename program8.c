#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
if(num&1)
printf("Number is odd");
else
printf("Number is even");
getch();
return 0;
}
