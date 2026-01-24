#include <stdio.h>

void greet(char name[50]);

int main()
{
    char name[50] = "Rinkal";

    greet(name);
}

void greet(char name[50])
{
    printf("Hello, %s\n", name);
}