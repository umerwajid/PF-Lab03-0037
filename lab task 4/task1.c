#include <stdio.h>

int main() {
    int total_slots = 50, booked_slots;
    printf("Enter number of booked slots: ");
    scanf("%d", &booked_slots);

    if (booked_slots < total_slots) {
        printf("Slots available! Remaining slots: %d\n", total_slots - booked_slots);
    } else {
        printf("Sorry, all slots are fully booked.\n");
    }
    return 0;
}
