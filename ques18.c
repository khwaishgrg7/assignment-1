#include <stdio.h>
int main() {
    int n, i, j, dup = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are:");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                dup = 1;
                break;  
            }
        }
    }
    if(dup == 0) {
        printf("-1");
    }
    printf("\n");
    return 0;
}
