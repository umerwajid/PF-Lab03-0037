#include <stdio.h>

int main() {
    int num1, num2, quotient, remainder;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        quotient = num1 / num2;
        remainder = num1 % num2;

        printf("Quotient: %d\n", quotient);
        printf("Remainder: %d\n", remainder);
    }

    return 0;
}
