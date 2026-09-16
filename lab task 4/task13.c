#include <stdio.h>

int main() {
    char payment;
    printf("Is payment confirmed? (Y/N): ");
    scanf(" %c", &payment);

    if (payment == 'Y' || payment == 'y') {
        printf("Membership Status: Confirmed\n");
    } else {
        printf("Membership Status: Pending\n");
    }
    return 0;
}
