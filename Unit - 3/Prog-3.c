/* Recursive factorial */
#include <stdio.h>

unsigned long long fact(unsigned int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int main(void) {
    unsigned int n;
    printf("Enter non-negative integer: ");
    if (scanf("%u", &n) != 1) return 0;
    printf("%u! = %llu\n", n, fact(n));
    return 0;
}
