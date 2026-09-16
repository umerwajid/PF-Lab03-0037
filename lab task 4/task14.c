#include <stdio.h>

int main() {
    int rating;
    printf("Give your gym service rating (1-5): ");
    scanf("%d", &rating);

    if (rating >= 4) {
        printf("Thank you! You have received a free protein shake voucher!\n");
    } else {
        printf("We will improve service. Thank you for your feedback!\n");
    }
    return 0;
}
