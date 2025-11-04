#include <stdio.h>
#include <math.h>

int main() {
    int num, copy, remainder, n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    copy= num;
    while (copy != 0) {
        copy/= 10;
        ++n;
    }
    copy= num;
    while (copy!= 0) {
        remainder = copy% 10;  
        result += pow(remainder, n);   
        copy /= 10;            
    }
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
