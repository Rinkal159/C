#include <stdio.h>

int main()
{
    printf("Hello world!\n");

    // int
    int a = 4;
    printf("int is %d\n", a);

    // float
    float floatNum = 3.14;
    printf("float num is %f\n", floatNum);

    // double
    double doubleNum = 5.16789;
    printf("double jum is %lf\n", doubleNum);

    // char
    char chr = 'a';
    printf("char is %c\n", chr);

    // string
    char string[] = "Rinkal";
    printf("string is %s\n", string);

    // getting integer type of input from user
    int num;

    printf("Your favourite digit in 0 to 9: ");
    scanf("%d", &num); //& defines address of variable, where to store user input(is like pointer)

    printf("Hope %d helps in your luck too!\n", num);
    return 0;


}