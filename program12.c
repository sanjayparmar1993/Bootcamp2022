#include<stdio.h>
#include<conio.h>

int main()
{
    char a;
    printf("Enter a character:\n");
    scanf("%c",&a);
if(a>='A'&&a<='Z')
    printf("Alphabet is uppercase");
else
    printf("Alphabet is lowercase");
    getch();
    return 0;
}
