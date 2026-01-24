#include <stdio.h>

int sort(int total, int coins[], int i)
{
    if (total == 0)
    {
        return 0;
    }

    if (total - coins[i] >= 0)
    {
        return 1 + sort(total - coins[i], coins, i);
    }
    else
    {
        return sort(total, coins, i + 1);
    }
}

int main()
{
    int total;
    printf("How much is the total? : ");
    scanf("%d", &total);

    while (total <= 0)
    {
        printf("How much is the total that is greater than 0? : ");
        scanf("%d", &total);
    }

    int coins[] = {25, 10, 5, 1};

    printf("Minimum coins needed : %d", sort(total, coins, 0));
}