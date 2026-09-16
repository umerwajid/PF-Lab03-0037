#include <stdio.h>

int main() {
    int plan;
    printf("Select Plan (1=Basic, 2=Premium, 3=VIP): ");
    scanf("%d", &plan);

    switch(plan) {
        case 1: printf("Selected Plan: Basic\n"); break;
        case 2: printf("Selected Plan: Premium\n"); break;
        case 3: printf("Selected Plan: VIP\n"); break;
        default: printf("Invalid Plan Choice.\n"); break;
    }
    return 0;
}
