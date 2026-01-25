#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main()
{
    //* CTYPE.H :
    //* _______

    //^ It is made up for only single characters(char), not strings.
    //^ ctype.h only works on unsigned char
    // char : -128 to 127
    // unsigned char : 0 to 255

    unsigned char ch = 'R';

    printf("%d\n", isalpha(ch));
    printf("%d\n", isdigit(ch));
    printf("%d\n", isalnum(ch));
    printf("%d\n", isupper(ch));
    printf("%d\n", islower(ch));

    printf("%c\n", tolower(ch));
    printf("%c\n", toupper(ch));

    //&------------------------------------------------------------------------------------------------

    //* STRING.H :
    //* ________

    //^ It is used for strings.

    char name[] = "Rinkal";
    char surname[] = "Singapuri";

    printf("%d\n", strlen(name));          // Do not count '\0'
    printf("%s\n", strcat(name, surname)); // concat

    printf("%d\n", strcmp(name, surname)); // compare
    // 0 if both are equals.
    // negative is first is lesser and second is greater.
    // positive is first is greater and second is lesser.

    char someChar[50] = "character is random";
    printf("%s\n", strchr(someChar, 'a')); //searches for a charcter from left, and returns entire string from that character (first occurence, then all)

    printf("%s\n", strstr(someChar, "ac")); //searches for a string from left, if it matches then returns entire string from that input.

    printf("%s\n", strrchr(someChar, 'a')); //searches for a charcter from right, and returns entire string from that character (last occurence, then all)
}
