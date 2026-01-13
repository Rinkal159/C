#include <stdio.h>

int main() {
    int num1, num2, op;

    printf("Choose numbers according to their operations.\n1: Addition\n2: Substraction\n3: Multiplication\n4: Divison\n5: Reminder\n\n");

    printf("First Number: ");
    scanf("%d", &num1);

    printf("Second Number: ");
    scanf("%d", &num2);

    printf("Operation Number you want to perform: ");
    scanf("%d", &op);
    
    switch(op) {
        case 1:
            printf("Addition of %d and %d is %d", num1, num2, num1+num2);
            break;

        case 2:
            printf("Substraction of %d and %d is %d", num1, num2, num1-num2);
            break;

        case 3:
            printf("Multiplication of %d and %d is %d", num1, num2, num1*num2);
            break;

        case 4:
            printf("Divison of %d and %d is %d", num1, num2, num1/num2);
            break;

        case 5:
            printf("Reminder of %d and %d is %d", num1, num2, num1%num2);
            break;

        default:
            printf("Invalid operation number.");
    }
}