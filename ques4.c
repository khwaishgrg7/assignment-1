#include <stdio.h>
int main() {
    int a, b, choice, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nOriginal values: a = %d, b = %d", a, b);
    printf("\n\nChoose a method to swap:");
    printf("\n1. Using Temporary Variable");
    printf("\n2. Using Arithmetic Operators");
    printf("\n3. Using Bitwise XOR");
    printf("\n4. Using Pointers");
    printf("\n\nEnter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:// Using Temporary Variable
            temp = a;
            a = b;
            b = temp;
            printf("\nUsing Temporary Variable: a = %d, b = %d", a, b);
            break;

        case 2:// Using Arithmetic Operators
            a = a + b;
            b = a - b;
            a = a - b;
            printf("\nUsing Arithmetic Operators: a = %d, b = %d", a, b);
            break;

        case 3://bitwise XOR
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
            printf("\nUsing Bitwise XOR: a = %d, b = %d", a, b);
            break;

        case 4:// Using Pointers
            {
                int *ptr1 = &a;
                int *ptr2 = &b;
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
                printf("\nUsing Pointers: a = %d, b = %d", a, b);
            }
            break;

        default:
            printf("\nInvalid choice! Please select between 1 and 4.");
    }
    printf("\n");
    return 0;
}


