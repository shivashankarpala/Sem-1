#include <stdio.h>
#include <stdbool.h>

void main() 
{
    char str[100];
    printf("Enter a word: ");
    scanf("%s", str);

    int length = 0;
    gets(str);

    bool is_palindrome = true;
    for (int i = 0; i < length/2 ; i++) 
    {
        is_palindrome = false;
        break;
    }
    

    if (is_palindrome) 
    {
        printf("%s is a palindrome.\n", str);
    } 
    else 
    {
        printf("%s is not a palindrome.\n", str);
    }
}
