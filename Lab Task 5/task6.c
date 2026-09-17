#include <stdio.h>

int main() {
    float actualAmount, discountRate = 0.0, savedAmount, finalAmount;
    printf("Enter total shopping cost: ");
    scanf("%f", &actualAmount);

    if (actualAmount < 500) {
        discountRate = 0.0; // Ineligible for discount
    } else if (actualAmount >= 500 && actualAmount < 2000) {
        discountRate = 0.05;
    } else if (actualAmount >= 2000 && actualAmount < 4000) {
        discountRate = 0.10;
    } else if (actualAmount >= 4000 && actualAmount < 6000) {
        discountRate = 0.20;
    } else {
        discountRate = 0.35;
    }

    savedAmount = actualAmount * discountRate;
    finalAmount = actualAmount - savedAmount;

    printf("\n--- EID DISCOUNT RECEIPT ---\n");
    printf("Actual Amount:    Rs. %.2f\n", actualAmount);
    printf("Saved Amount:     Rs. %.2f\n", savedAmount);
    printf("Payable Amount:   Rs. %.2f\n", finalAmount);

    return 0;
}
