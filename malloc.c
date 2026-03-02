#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // char *og = "rinkal";
    // char *name = malloc(sizeof(og));
    // if (name == NULL)
    // {
    //     // printf("Memory allocation failed\n");
    //     return 1;
    // }

    // strcpy(name, og);
    // // printf("%s\n", name);

    //&------------------------------------------------------------------------------------------------------

    // int n = 3;
    // int *arr = malloc(n * sizeof(int));
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;

    // printf("size of arr: %i\n", sizeof(arr)); // sizeof() runs at the compile time, thus says 4 because it only knows arr is a type of int * that takes 4 bytes in memory and malloc allocates 12 bytes memory of 3 int at the runtime

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%i\n", arr[i]);
    // }

    //&------------------------------------------------------------------------------------------------------

    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", arr[i]);
    }

    //?------------------------------------------------------------------------------------------------------

    // free(name);
    // free(arr);
    // name = NULL;
    // arr = NULL;
}
