#include<stdio.h>
#include<conio.h>

int main()
{
int num;
printf("Enter a number:\n");
scanf("%d",&num);
if(num%7==0||num%3==0)
printf("%d is divisible by 7 or 3",num);
else
printf("%d is not divisible by 7 or 3",num);
getch();
return 0;
}
