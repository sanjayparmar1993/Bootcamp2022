#include<stdio.h>
#include<conio.h>
int main()
{
    int a=22,b=33,c;
    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d",a,b);
    getch();
    return 0;

}
