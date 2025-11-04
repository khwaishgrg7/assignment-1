#include <stdio.h>
int hcfRecursive(int a, int b) {
    if (b == 0)
        return a;              
    else
        return hcfRecursive(b, a % b);
}
int hcfIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    printf("\nHCF using recursion: %d", hcfRecursive(a, b));
    printf("\nHCF using iteration: %d\n", hcfIterative(a, b));
    return 0;
}
