#include <stdio.h>
#include <string.h>

void add_strings(char str1[], char str2[], char result[]) 
{
    int i = 0, j = 0, k = 0;

    // Add characters of str1 to result
    while (str1[i] != '\0') {
        result[k++] = str1[i++];
    }

    // Add characters of str2 to result
    while (str2[j] != '\0') {
        result[k++] = str2[j++];
    }

    // Null terminate the result string
    result[k] = '\0';
}

void main() 
{
    char str1[100], str2[100], result[200];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    //Concatination of 2 Strings using the array of characters concept
    add_strings(str1, str2, result);

    //Same result using a built-in function, and is stored in str1 (first paremeter)
    strcat(str1, str2);

    printf("\nResultant string using logic: %s\n", result);
    printf("Resultant string using built-in function: %s\n", str1);
}