#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void passByValue(int n);
void passByReference(int *n);
void changeString(char *name);

int main(void)
{
    // & - Gives the "memory address" of a variable.
    // * - "Pointer" that stores "memory address" of a variable, NOT its value

    // If i dereference an int variable, then it returns the stored value,
    // but If i dereference a string, then it returns the first character of string because it stores address of only first character in pointer.
    // ex.
    // int a = 12;
    // int *p = &a;
    // printf("%i\n", *p); //12

    // char name[] = "rinkal";
    // printf("%c\n", *name);

    //& ----------------------------------------------------------------------------------------------------

    //* &a and *p

    // int a = 5;
    // printf("%i\n", a);  // n
    // printf("%p\n", &a); // address of n

    // int b = 5;
    // int *p = &b;
    // printf("%p\n", p);  // address of n
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

    // name and &name[0] are same, because name returns address of first character only.
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

    //* pointers in parameteres
    // In function parameters, "arrays" automatically become "pointers".
    // char name[] and char *name are same in function parameter.

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
    // char myName[] = "rinkal";
    // char *yourName = myName;

    // yourName[0] = toupper(yourName[0]);

    // printf("myName: %s\n", myName);
    // printf("yourName: %s\n", yourName);

    //& ----------------------------------------------------------------------------------------------------

    //* Different address though malloc
    // char myName[] = "rinkal";
    // char *yourName = malloc(sizeof(myName));

    // strcpy(yourName, myName);

    // yourName[0] = toupper(yourName[0]);

    // printf("%s\n", myName);
    // printf("%s\n", yourName);

    

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