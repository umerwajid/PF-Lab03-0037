#include <stdio.h>

int main() {
    char trainer;
    double base_bill = 3000.0;
    printf("Do you want a personal trainer? (Y/N): ");
    scanf(" %c", &trainer);

    if (trainer == 'Y' || trainer == 'y') {
        base_bill += 1500.0; // Adding trainer charges
        printf("Personal trainer assigned. Updated bill: Rs. %.2lf\n", base_bill);
    } else {
        printf("No trainer assigned. Standard bill: Rs. %.2lf\n", base_bill);
    }
    return 0;
}
