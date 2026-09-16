#include <stdio.h>

int main() {
    int months, plan_rate = 2500; // Assuming uniform plan rate for calculations
    double total, net_bill;

    printf("Enter number of months: ");
    scanf("%d", &months);

    total = months * plan_rate;
    net_bill = total + (total * 0.10); // Adding 10% tax

    printf("Base calculation: Rs. %.2lf\n", total);
    printf("Total bill (including 10%% tax): Rs. %.2lf\n", net_bill);
    return 0;
}
