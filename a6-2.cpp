#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Check if n is negative
    if (n < 0) {
        printf("Error: Factorial of a negative number does not exist.");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("The factorial of %d is %lld", n, fact);
    }
    return 0;
}
