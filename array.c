#include <string.h>
#include <stdio.h>

int main()
{
    //* Array Core
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

    //* Addition of numbers, number of elements and elements are getting from the user
    int n;
    printf("How many numbers you want to add? : ");
    scanf("%d", &n);

    int marks[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    printf("Sum of these %d numbers is %d\n", n, sum);

    //&------------------------------------------------------------------------------------------------

    //* Type casting
    // int num = 12;
    // printf("%f\n", num); // 0.0000
    // printf("%f\n", (float)num); // 12.0000

    // char c = 'A';
    // printf("%d\n", c); // 65

    // char name[] = "abc";
    // printf("%i\n", name);    // gives the address of name
    // // printf("%s\n", name[0]); // segmentation fault
    // // correct way 👇🏻
    // printf("%c\n", name[0]); //prints character on that index
    // printf("%i\n", name[0]); //prints ASCII value of that charcater present on that index
    // printf("%s\n", name); //print whole string

    //&------------------------------------------------------------------------------------------------

    //* Array of Characters (String)
    // char arr[] = "ab";
    // printf("%d\n", sizeof(arr)); // 3
    // printf("%d\n", arr[2]);      // 0
    // printf("%c\n", arr[2]);      // nothing prints, because \0 is not visible character, it is NUL

    //&------------------------------------------------------------------------------------------------

    //* String length
    // char arr[] = "ri";
    // printf("%d\n", sizeof(arr) - 1); // length of string - way 1
    // printf("%d\n", strlen(arr));     // length of string - way 2

    //&------------------------------------------------------------------------------------------------

    //* Getting string input

    // //^ scanf : only takes first string, does not take strings after space.
    // char name[50];
    // printf("Name: ");
    // scanf("%s", name); //rinkal singapuri

    // printf("%s\n", name); //rinkal

    // //^ fgets : takes all the input + automatically prints new line
    // char name[2];
    // printf("Name: ");
    // fgets(name, sizeof(name), stdin); // rinkal singapuri

    // printf("%s", name); // rinkal singapuri

    //&------------------------------------------------------------------------------------------------

    //* Print string

    // char name[] = "Rinkal";

    // for (int i = 0, n = sizeof(name) / sizeof(name[0]); i < n; i++)
    // {
    //     printf("%c at %i\n", name[i], i);
    // }
    // printf("\n");

    //&------------------------------------------------------------------------------------------------

    //* Convert to string uppercase

    // char name[50];
    // printf("Name: ");
    // fgets(name, sizeof(name), stdin);

    // for (int i = 0, n = strlen(name); i < n; i++)
    // {
    //     if (name[i] >= 'a' && name[i] <= 'z')
    //     {
    //         name[i] = name[i] - 32;
    //     }
    // }

    // printf("%s", name);
}
