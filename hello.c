#include <stdio.h>

int main()
{
    printf("Hello world!\n");

    //* int
    int a = 4;
    printf("int is %d\n", ++a);

    //* float
    float floatNum = 3.14;
    printf("float num is %f\n", floatNum);

    //* double
    double doubleNum = 5.16789;
    printf("double jum is %lf\n", doubleNum);

    //* char
    char chr = 'a';
    printf("char is %c\n", chr);

    //* string
    char string[] = "Rinkal";
    printf("string is %s\n", string);

    //* Printing multiple variables
    int num1 = 12;
    int num2 = 15;
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum); // order is important

    char myName[] = "Rinkal";
    int age = 18;
    printf("My name is %s and I am %d years old.\n", myName, age); // it comes with message on terminal as "Segmentation fault", because in double quote, you have defined string first, and then int, but in variable declaration, int is first defined, then string, that is why order is importtant when printing mutiple varibles at once.

    //* getting integer type of input from user
    int num;

    printf("Your favourite digit in 0 to 9: ");
    scanf("%d", &num); //& defines address of variable, where to store user input(is like pointer). if user input is string, then no "&" is needed

    printf("Hope %d helps in your luck too!\n", num);

    //* Conditionals
    int myAge = 17;
    if (myAge >= 18)
    {
        printf("I can vote.\n");
    }
    else
    {
        printf("I am not allow to vote.\n");
    }

    //* For loop
    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    //* While loop
    int i = 1;
    while (i <= 5)
    {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    //* print numbers by getting edge number from prompt
    int n;
    printf("How long you want to print numbers starting from 0: ");
    scanf("%d", &n);

    while (n < 1)
    {
        printf("How long you want to print numbers starting from 0: ");
        scanf("%d", &n);
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    //* Functions
    greet("Rinkal");


    return 0;
}

void greet(char name[50])
{
    printf("Hello, %s\n", name);
}
