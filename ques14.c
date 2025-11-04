#include <stdio.h>
int main() {
    int n, i, j, count = 0, isPrime;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        int num = arr[i];
        if(num < 2)
            continue;

        isPrime = 1;  
        for(j = 2; j * j <= num; j++) {
            if(num % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            count++;
    }
    printf("Total prime numbers in the array: %d\n", count);
    return 0;
}

