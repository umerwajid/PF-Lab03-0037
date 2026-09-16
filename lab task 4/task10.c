#include <stdio.h>

int main() {
    int date;
    double dues = 3000.0;
    printf("Enter payment day of the month (1-31): ");
    scanf("%d", &date);

    if (date > 10) {
        dues += 3000; // Late penalty
        printf("Late payment penalty of Rs. 300 applied. Total due: Rs. %.2lf\n", dues);
    } else {
        printf("Payment on time. Total due: Rs. %.2lf\n", dues);
    }
    return 0;
}
