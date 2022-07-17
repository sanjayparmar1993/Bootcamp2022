#include<stdio.h>
#include<conio.h>
int main()
{
int inr;
float usd;
printf("Enter a indian rupees:\n");
scanf("%d",&inr);
usd=inr/76.23;
printf("%.2f Usd",usd);
getch();
return 0;
}
