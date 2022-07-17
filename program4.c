#include<stdio.h>
#include<conio.h>
int main()
{
    int radius;
    float area ;
    printf("Enter a number\n");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("area of circle is %.2f having the radius %d",area,radius);
    getch();
    return 0;

}

