#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    if(year%4==0)
    printf("%d is a leap year",year);
    else
    printf("%d is not a leap year",year);
    getch();
    return 0;
}
