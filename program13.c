#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter a three digit number:\n");
scanf("%d",&a);
b=a;
a=a%10;
b=b/10;
c=a*100+b;
printf("%d",c);
getch();
return 0;
}
