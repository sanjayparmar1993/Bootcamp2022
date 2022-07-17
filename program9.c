#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter a three number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
      if(a>c)
          printf("%d is a greater number",a);
      else
          printf("%d is a greater number",c);
    }
   else
   {
       if(b>c)
          printf("%d is a greater number",b);
       else
          printf("%d is a greater number",c);
   }
       getch();
       return 0;
}
