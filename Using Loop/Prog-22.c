/* Count digits in a number */
#include <stdio.h>
int main() {
    long n; printf("Enter integer: "); if (scanf("%ld",&n)!=1) return 0;
    if (n==0) { printf("Digits = 1\n"); return 0; }
    if (n<0) n = -n;
    int count=0;
    while (n) { n /= 10; count++; }
    printf("Digits = %d\n", count);
    return 0;
}
