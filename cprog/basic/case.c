#include<stdio.h>

void main()
{
    char ch;

    printf("Input any Character ");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z')
        printf("\nLower Case");
    else 
    if(ch>='A' && ch<='Z')
        printf("\nUpper Case");
    else
        printf("\nNot an Alphabet");
}