#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a,b,c;
    printf("Enter a three digit numbers:\n");
    scanf("%d",&x);
    a=x/10;
    b=x%10;
    c=a%10;
    a=a/10;
    printf("sum of three digit is %d",a+b+c);
    getch();
    return 0;

}
