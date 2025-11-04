#include <stdio.h>

int main() {
    int n, i, found = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("First occurrence of 99 is at index %d\n", found );
    else
        printf("Number 99 not found in the array.\n");

    return 0;
}
