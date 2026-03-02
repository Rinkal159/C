#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 12;
    int b = 24;

    printf("Before swapping, a: %i and b: %i\n", a, b);

    swap(&a, &b);

    printf("After swapping, a: %i and b: %i\n", a, b);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}