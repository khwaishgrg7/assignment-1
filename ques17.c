#include <stdio.h>
int main() {
    int n, i, choice;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[100]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nArray before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\nWhere do you want to delete the element?\n");
    printf("1. Front\n2. Middle\n3. End\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    else if (choice == 2) {
        int mid = n / 2;
        for (i = mid; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    else if (choice == 3) {
        n--; 
    }
    else {
        printf("Invalid choice!\n");
        return 0;
    }
    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
