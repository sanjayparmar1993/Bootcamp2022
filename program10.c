#include<stdio.h>
#include<conio.h>

int main()
{
int cp,sp;
float profit,loss;
printf("Enter a sell price and cost price:\n");
scanf("%d%d",&cp,&sp);
if(sp>cp)
{
profit=sp-cp;
printf("profit is %.2f%%",profit/cp*100.0);
}
else
{
if(cp>sp)
loss=cp-sp;
printf("loss is is %.2f%%",loss/cp*100.0);
}
getch();
return 0;
}
