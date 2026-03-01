#include <stdio.h>
#include <ctype.h>

void passByValue(int n);
void passByReference(int *n);
void changeString(char *name);

int main(void)
{
    // & - Gives the "memory address" of a variable.
    // * - "Pointer" that stores "memory address" of a variable, NOT its value

    //& ----------------------------------------------------------------------------------------------------

    //* &a and *p

    // int a = 5;
    // printf("%i\n", a);  // n
    // printf("%p\n", &a); // adress of n

    // int b = 5;
    // int *p = &b;
    // printf("%p\n", p);  // adress of n
    // printf("%i\n", *p); // n (dereferencing) - go to the address and give me the value

    //& ----------------------------------------------------------------------------------------------------

    //* passByValue() and passByReference()

    // int n = 5;
    // printf("n: %i\n", n);
    // passByValue(n);
    // printf("Updated n: %i\n", n);

    // printf("\n");

    // printf("n: %i\n", n);
    // passByReference(&n);
    // printf("Updated n: %i\n", n);

    //& ----------------------------------------------------------------------------------------------------

    //* Pointer and Arrays of characters

    // // name and &name[0] are same, because name returns address of first character only.
    // char name[] = "Rinkal";
    // printf("%p\n", &name);
    // printf("%p\n", &name[0]);
    // printf("%p\n", name);

    // // address and its type:
    // // name - char *
    // // &name[0] - char *
    // // &name - char (*)[7]

    // char *pName = name;
    // printf("%c\n", *pName);

    //& ----------------------------------------------------------------------------------------------------

    //* changeString()

    // char name[] = "rinkal";
    // printf("%s\n", name);
    // changeString(name);
    // printf("%s\n", name);

    //& ----------------------------------------------------------------------------------------------------

    //* pointers in parameteres

    // In function parameters, "arrays" automatically become "pointers".
    // so int function parameter,
    // char name[] and char *name is same

    //& ----------------------------------------------------------------------------------------------------

    //* dereferencing in pointer of string

    // int n = 5;
    // int *p = &n;
    // printf("%i\n", *p); //dereferencing, *p here returns n

    // // similarly
    // char *name = "rinkal"; //*name stores address of first character
    // printf("%c\n", *name); //dereferencing, *name has address of first character, thus it returns first characters that is 'r'
    // printf("%c\n", *(name + 1)); //i (pointer arithmatic)

    // printf("%s\n", name); //rinkal
    // printf("%s\n", name+1); //inkal

    //& ----------------------------------------------------------------------------------------------------

    //* Same address
    char myName[] = "rinkal";
    char *yourName = myName;

    *yourName = toupper(*yourName);

    printf("myName: %s\n", myName);
    printf("yourName: %s\n", yourName);
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

void changeString(char *name)
{
    name[0] = 'R';
    printf("%s\n", name);
}