#include <stdio.h>
int main() {
    int choice;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        int bin, dec = 0, base = 1, rem;
        printf("Enter a binary number: ");
        scanf("%d", &bin);
        while (bin > 0) {
            rem = bin % 10;
            dec = dec + rem * base;
            bin = bin / 10;
            base = base * 2;
        }
        printf("Decimal value = %d", dec);
    }
    else if (choice == 2) {
        int dec;
        printf("Enter a decimal number: ");
        scanf("%d", &dec);

        int bin[32], i = 0;
        while (dec > 0) {
            bin[i] = dec % 2;
            dec = dec / 2;
            i++;
        }
        printf("Binary value = ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", bin[j]);
        }
    }
    else {
        printf("Invalid choice!");
    }
    return 0;
}
