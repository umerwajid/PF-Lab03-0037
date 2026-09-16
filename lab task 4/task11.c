#include <stdio.h>

int main() {
    char corporate;
    double bill = 4000.0;
    printf("Are you a corporate employee? (Y/N): ");
    scanf(" %c", &corporate);

    if (corporate == 'Y' || corporate == 'y') {
        bill = bill * 0.80; // 20% discount
        printf("Corporate discount applied! Total bill: Rs. %.2lf\n", bill);
    } else {
        printf("Standard pricing. Total bill: Rs. %.2lf\n", bill);
    }
    return 0;
}
