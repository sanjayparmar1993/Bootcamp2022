#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(char);
    d=sizeof(double);

    printf("size of int %d",a);
    printf("\nsize of float is %d",b);
    printf("\nsize of char is %d",c);
    printf("\nsize of double is %d",d);
    getch();
    return 0;
}

