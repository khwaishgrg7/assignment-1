#include <stdio.h>
int main() {
    int n, i, value, choice;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n+3]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\nEnter the value to insert: ");
    scanf("%d", &value);
    printf("Where do you want to insert the value?\n");
    printf("1. Front\n2. Middle\n3. End\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        for (i = n; i > 0; i--) {
            arr[i] = arr[i - 1]; 
        }
        arr[0] = value;
        n++;
    }
    else if (choice == 2) {
        int mid = n / 2;
        for (i = n; i > mid; i--) {
            arr[i] = arr[i - 1];
        }
        arr[mid] = value;
        n++;
    }
    else if (choice == 3) {
        arr[n] = value;
        n++;
    }
    else {
        printf("Invalid choice!\n");
        return 0;
    }
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
