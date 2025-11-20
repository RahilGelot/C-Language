/* Reverse digits of a number */
#include <stdio.h>
int main() {
    long n; printf("Enter integer: "); if (scanf("%ld",&n)!=1) return 0;
    long orig = n; int neg = 0;
    if (n<0) { neg = 1; n = -n; }
    long rev = 0;
    while (n) { rev = rev*10 + (n%10); n /= 10; }
    if (neg) rev = -rev;
    printf("Reverse of %ld is %ld\n", orig, rev);
    return 0;
}
