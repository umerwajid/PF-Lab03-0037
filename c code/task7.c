#include <stdio.h>

int main() {
    char city[50];
    char country[50];
    long long population;
    double area;
    char grade;

    printf("Enter City: ");
    scanf("%s", city);

    printf("Enter Country: ");
    scanf("%s", country);

    printf("Enter Population: ");
    scanf("%lld", &population);

    printf("Enter Area: ");
    scanf("%lf", &area);

    printf("Enter Grade: ");
    scanf(" %c", &grade); // The space before %c handles the newline input safely

    printf("\nYou live in %s, %s.\n", city, country);
    printf("Population: %lld\n", population);
    printf("Area: %.2lf\n", area);
    printf("Grade: %c\n", grade);

    return 0;
}
