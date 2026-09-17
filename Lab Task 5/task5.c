#include <stdio.h>

int main() {
    float units, baseBill, totalBill, surcharge = 0.0;
    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        baseBill = units * 0.50;
    } else if (units <= 150) {
        baseBill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        baseBill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        baseBill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    surcharge = baseBill * 0.20;
    totalBill = baseBill + surcharge;

    printf("Base Bill Amount: Rs. %.2f\n", baseBill);
    printf("Additional Surcharge (20%%): Rs. %.2f\n", surcharge);
    printf("Total Electricity Bill: Rs. %.2f\n", totalBill);

    return 0;
}
