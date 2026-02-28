#include <stdio.h>

void passByValue(int n);
void passByReference(int *n);

int main(void)
{
    // int a = 5;
    // printf("%i\n", a);  // n
    // printf("%p\n", &a); // adress of n

    // int b = 5;
    // int *p = &b;
    // printf("%p\n", p);  // adress of n
    // printf("%i\n", *p); // n (dereferencing)

    int n = 5;
    printf("n: %i\n", n);
    passByValue(n);
    printf("Updated n: %i\n", n);

    printf("\n");

    printf("n: %i\n", n);
    passByReference(&n);
    printf("Updated n: %i\n", n);
}

void passByValue(int n)
{
    n++;
    printf("n in function: %i\n", n);
}

void passByReference(int *n)
{
    *n += 1;
    printf("n in function: %i\n", *n);
}