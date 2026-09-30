#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: please enter an integer.");
        putchar(10);
        return 1;
    }
    if (n < 0) {
        printf("Error: n must not be negative.");
        putchar(10);
        return 1;
    }
    printf("%d! = %lld", n, factorial(n));
    putchar(10);
    return 0;
}
