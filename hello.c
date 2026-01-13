#include <stdio.h>

int main()
{
    printf("Hello world!\n");

    //* int
    int a = 4;
    printf("int is %d\n", a);


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
    int num1= 12;
    int num2 = 15;
    int sum = num1+num2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum); //order is important

    char myName[] = "Rinkal";
    int age = 18;
    printf("My namer is %s and I am %d years old.", age, myName); //it comes with message on terminal as "Segmentation fault", because in double quote, you have defined string first, and then int, but in variable declaration, int is first defined, then string, that is why order is importtant when printing mutiple varibles at once.


    //* getting integer type of input from user
    int num;

    printf("Your favourite digit in 0 to 9: ");
    scanf("%d", &num); //& defines address of variable, where to store user input(is like pointer). if user input is string, then no "&" is needed

    printf("Hope %d helps in your luck too!\n", num);

    return 0;


}