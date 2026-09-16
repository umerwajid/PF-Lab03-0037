#include <stdio.h>

int main() {
    int months;
    double price = 3000.0, total; // Assuming baseline price of 3000 per month
    printf("Enter registration duration (in months): ");
    scanf("%d", &months);

    total = months * price;
    if (months >= 6) {
        total = total * 0.90; // 10% discount
        printf("10%% Long-term discount applied! Total bill: Rs. %.2lf\n", total);
    } else {
        printf("Normal pricing applied. Total bill: Rs. %.2lf\n", total);
    }
    return 0;
}
