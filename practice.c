#include <stdio.h>

void printPattern(int n)
{
    if (n == 0)
    {
        return;
    }

    printPattern(n - 1);

    for (int i = 1; i <= n; i++)
    {
        printf("*");
    }

    printf("\n");
};

int main(void)
{
    int num;
    printf("n: ");
    scanf("%d", &num);

    printPattern(num);
}