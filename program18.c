#include<stdio.h>
#include<conio.h>

int main()
{
  int month;
  printf("Enter a month number\n");
  scanf("%d",&month);
  if(month==1)
  printf("31 days");
    else
        if(month==2)
           printf("28/29 days");
    else
        if(month==3)
           printf("31 days");
    else
     if(month==4)
     printf("30 days");
    else
     if(month==5)
     printf("31 days");
    else
     if (month==6)
     printf("30 days");
    else
     if (month==7)
     printf("31 days");
    else
     if(month==8)
     printf("31 days");
    else
     if(month==9)
     printf("30 days");
    else
     if(month==10)
     printf("31 days");
    else
     if (month==11)
     printf("30 days");
    else
     printf("31 days");
     getch();
     return 0;


     }
