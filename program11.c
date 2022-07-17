#include<stdio.h>
#include<conio.h>
int main()
{
    int num,digit,a;
    printf("Enter a number and digit:\n");
    scanf("%d%d",&num,&digit);
    a=num*10+digit;
    printf("%d",a);
    getch();
    return 0;
}
