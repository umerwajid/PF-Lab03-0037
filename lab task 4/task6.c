#include <stdio.h>

int main() {
    int rating;
    printf("Enter trainer rating (1-5): ");
    scanf("%d", &rating);

    switch(rating) {
        case 5: printf("Excellent\n"); break;
        case 4: printf("Good\n"); break;
        case 3: printf("Average\n"); break;
        case 2: printf("Below Average\n"); break;
        case 1: printf("Poor\n"); break;
        default: printf("Invalid rating entry.\n"); break;
    }
    return 0;
}
