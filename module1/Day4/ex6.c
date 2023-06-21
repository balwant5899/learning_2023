#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i =0;str[i] != '\0';i++)
    {
    if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    puts(str);
}