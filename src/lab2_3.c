#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int n;
    printf("Enter an integer greater than or equal to 2: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: please enter an integer.");
        putchar(10);
        return 1;
    }
    if (n < 2) {
        printf("Error: n must be at least 2.");
        putchar(10);
        return 1;
    }
    printf("Prime numbers up to %d:", n);
    putchar(10);
    for (int number = 2; number <= n; number++) {
        if (is_prime(number)) {
            printf("%d ", number);
        }
    }
    putchar(10);
    return 0;
}
