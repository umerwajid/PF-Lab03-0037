#include <stdio.h>

int main() {
    int types;
    int qty1,qty2,qty3,qty4;
    char choice1 , choice2 , choice3 , choice4 ;
    int val1 , val2 , val3 , val4 , total ;

    // Header and Menu Display
    printf("    ABC Restaurant Online Order Placement\n");
    printf("                  WELCOME!\n\n");
    printf("Please select from the following Menu\n");
    printf("B= Burger\n");
    printf("F= French Fries\n");
    printf("P= Pizza\n");
    printf("S= Sandwiches\n");

    // Get number of snack types
    printf("How many types of snacks you need to order: ");
    scanf("%d", &types);

    // --- INPUT SECTION ---
    
    // First Item Input (Required for 1, 2, 3, or 4 types)
    if (types >= 1) {
        printf("Enter first Snack you want to order: ");
        scanf(" %c", &choice1);
        printf("Please provide quantity: ");
        scanf("%d", &qty1);

        switch (choice1) {
            case 'B': case 'b': val1 = 200 * qty1; break;
            case 'F': case 'f': val1 = 50 * qty1; break;
            case 'P': case 'p': val1 = 500 * qty1; break;
            case 'S': case 's': val1 = 150 * qty1; break;
        }
        total += val1;
    }

    // Second Item Input (Required for 2, 3, or 4 types)
    if (types >= 2) {
        printf("Enter second Snack you want to order: ");
        scanf(" %c", &choice2);
        printf("Please provide quantity: ");
        scanf("%d", &qty2);

        switch (choice2) {
            case 'B': case 'b': val2 = 200 * qty2; break;
            case 'F': case 'f': val2 = 50 * qty2; break;
            case 'P': case 'p': val2 = 500 * qty2; break;
            case 'S': case 's': val2 = 150 * qty2; break;
        }
        total += val2;
    }

    // Third Item Input (Required for 3 or 4 types)
    if (types >= 3) {
        printf("Enter third Snack you want to order: ");
        scanf(" %c", &choice3);
        printf("Please provide quantity: ");
        scanf("%d", &qty3);

        switch (choice3) {
            case 'B': case 'b': val3 = 200 * qty3; break;
            case 'F': case 'f': val3 = 50 * qty3; break;
            case 'P': case 'p': val3 = 500 * qty3; break;
            case 'S': case 's': val3 = 150 * qty3; break;
        }
        total += val3;
    }

    // Fourth Item Input (Required for 4 types)
    if (types >= 4) {
        printf("Enter fourth Snack you want to order: ");
        scanf(" %c", &choice4);
        printf("Please provide quantity: ");
        scanf("%d", &qty4);

        switch (choice4) {
            case 'B': case 'b': val4 = 200 * qty4; break;
            case 'F': case 'f': val4 = 50 * qty4; break;
            case 'P': case 'p': val4 = 500 * qty4; break;
            case 'S': case 's': val4 = 150 * qty4; break;
        }
        total += val4;
    }

   
    printf("-------------------------------------------\n");
    printf("You have ordered!\n");

    
    if (qty1 > 0) {
        if (choice1 == 'B' || choice1 == 'b') printf("%d Burger (s) value %d PKR\n", qty1, val1);
        else if (choice1 == 'F' || choice1 == 'f') printf("%d French Fries (s) value %d PKR\n", qty1, val1);
        else if (choice1 == 'P' || choice1 == 'p') printf("%d pizza (s) value %d PKR\n", qty1, val1);
        else if (choice1 == 'S' || choice1 == 's') printf("%d Sandwich (s) value %d PKR\n", qty1, val1);
    }

  
    if (qty2 > 0) {
        if (choice2 == 'B' || choice2 == 'b') printf("%d Burger (s) value %d PKR\n", qty2, val2);
        else if (choice2 == 'F' || choice2 == 'f') printf("%d French Fries (s) value %d PKR\n", qty2, val2);
        else if (choice2 == 'P' || choice2 == 'p') printf("%d pizza (s) value %d PKR\n", qty2, val2);
        else if (choice2 == 'S' || choice2 == 's') printf("%d Sandwich (s) value %d PKR\n", qty2, val2);
    }

   
    if (qty3 > 0) {
        if (choice3 == 'B' || choice3 == 'b') printf("%d Burger (s) value %d PKR\n", qty3, val3);
        else if (choice3 == 'F' || choice3 == 'f') printf("%d French Fries (s) value %d PKR\n", qty3, val3);
        else if (choice3 == 'P' || choice3 == 'p') printf("%d pizza (s) value %d PKR\n", qty3, val3);
        else if (choice3 == 'S' || choice3 == 's') printf("%d Sandwich (s) value %d PKR\n", qty3, val3);
    }

    // Print fourth item summary
    if (qty4 > 0) {
        if (choice4 == 'B' || choice4 == 'b') printf("%d Burger (s) value %d PKR\n", qty4, val4);
        else if (choice4 == 'F' || choice4 == 'f') printf("%d French Fries (s) value %d PKR\n", qty4, val4);
        else if (choice4 == 'P' || choice4 == 'p') printf("%d pizza (s) value %d PKR\n", qty4, val4);
        else if (choice4 == 'S' || choice4 == 's') printf("%d Sandwich (s) value %d PKR\n", qty4, val4);
    }

    printf("Total: %d PKR\n", total);
    printf("Thank you for your order... have a nice day.\n");

    return 0;
}
