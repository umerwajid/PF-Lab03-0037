#include <stdio.h>

int main() {
    int age1, age2, age3;
    printf("Enter ages of 3 applicants: ");
    scanf("%d %d %d", &age1, &age2, &age3);

    if (age1 >= 16 && age2 >= 16 && age3 >= 16) {
        printf("Group membership allowed!\n");
    } else {
        printf("Group membership denied. All applicants must be at least 16.\n");
    }
    return 0;
}
