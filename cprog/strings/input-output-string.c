#include <stdio.h>

void main() 
{
    char str[100];

    // Input a string
    printf("Enter a string: ");
    gets(str); 
    // Alternatively, use fgets for safer input
    // fgets(str, sizeof(str), stdin);

    // Output the string
    printf("You entered: %s", str);
}
