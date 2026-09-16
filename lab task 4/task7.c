#include <stdio.h>

int main() {
    int choice;
    double bill = 3000.0;
    printf("Opt for Diet Consultation? (1=Yes, 0=No): ");
    scanf("%d", &choice);

    if (choice == 1) {
        bill += 1000.0;
        printf("Diet consultation added. Total bill: Rs. %.2lf\n", bill);
    } else {
        printf("Diet consultation skipped. Total bill: Rs. %.2lf\n", bill);
    }
    return 0;
}
