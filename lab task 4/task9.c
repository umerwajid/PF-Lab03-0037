#include <stdio.h>

int main() {
    int choice;
    printf("Supplement Menu:\n1. Protein\n2. Creatine\n3. BCAA\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("You selected: Protein\n"); break;
        case 2: printf("You selected: Creatine\n"); break;
        case 3: printf("You selected: BCAA\n"); break;
        default: printf("Error: Invalid choice entered.\n"); break;
    }
    return 0;
}
