#include <stdio.h>

int main()
{
    // int n;
    // printf("How many numbers you want to add? : ");
    // scanf("%d", &n);

    // int marks[n];
    // int sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Number %d: ", i + 1);
    //     scanf("%d", &marks[i]);
    //     sum += marks[i];
    // }

    // printf("Sum of these %d numbers are %d\n", n, sum);

    //&------------------------------------------------------------------------------------------------

    //* Array

    // int arr[] = {1, 2, 3, 4, 5.5};
    // printf("%d\n", arr[0]);

    // for (int i = 1; i <= sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     printf("%d ", i);
    // }

    // printf("\n");

    // char name[] = "Rinkal";
    // printf("%s\n", name); // as string

    // for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++)
    // {
    //     printf("%c", name[i]); // as array of characters
    // }

    // printf("\n");

    // int threeSizeArray[3]; //allocated 12 bytes whether elements are stored or not, if values are not defined, c automatically fills 0 in every index.
    // printf("%d\n", sizeof(threeSizeArray));

    //&------------------------------------------------------------------------------------------------

    int num = 12;
    printf("%f\n", num); // 0.0000

    char c = 'A';
    printf("%d\n", c); // 65

    char name[] = "abc";
    printf("%i\n", name);    // gives the address of name
    // printf("%s\n", name[0]); // segmentation fault
    // correct way 👇🏻
    printf("%c\n", name[0]); //prints character on that index
    printf("%i\n", name[0]); //prints ASCII value of that charcater present on that index
    printf("%s\n", name); //print whole string
}
