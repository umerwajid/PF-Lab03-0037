#include <stdio.h>

int main() {
    int age;
    printf("Enter applicant age: ");
    scanf("%d", &age);

    if (age >= 16) {
        printf("Membership Approved!\n");
    } else {
        printf("Membership Denied. Minimum age requirement is 16.\n");
    }
    return 0;
}
