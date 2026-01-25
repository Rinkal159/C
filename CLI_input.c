#include <stdio.h>

int main(int argc, char *argv[])
{
    //* argc :
    // number of CLI
    //* argv :
    // each CLI, argv[0] points to the name of the file, CLI starts from argv[1]

    if (argv[1] != NULL)
    {
        printf("Name : %s\n", argv[1]);
        printf("Number of CLI: %d", argc);
        return 0;
    }
    else
    {
        printf("No input provided.\n");
        return 1;
    }

    //* To know the exit status:
    // echo $?
}