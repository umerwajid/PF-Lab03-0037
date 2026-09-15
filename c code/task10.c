#include <stdio.h>

int main() {
    float num;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    // %.1f formats the floating-point output to exactly 1 decimal place
    printf("Formatted number: %.1f\n", num);

    return 0;
}
