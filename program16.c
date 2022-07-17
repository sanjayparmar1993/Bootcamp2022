#include<stdio.h>
#include<conio.h>

int main()
{
    char a;
    printf("Enter a character:\n");
    scanf("%c",&a);
  if(a>='A'&&a<='Z')
    printf("uppercase alphabet");
else
  if(a>='a'&&a<='z')
    printf("lowercase alphabet");
else
  if(a>='0'&&a<='9')
    printf("A digit");
else
    printf("special character");

getch();
return 0;
}
