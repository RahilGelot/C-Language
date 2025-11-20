/* Check automorphic number */
#include <stdio.h>
#include <math.h>
int main() {
    long n; printf("Enter integer: "); if (scanf("%ld",&n)!=1) return 0;
    long square = n * n;
    long mod = 1;
    long tmp = n;
    while (tmp) { mod *= 10; tmp /= 10; }
    if (square % mod == n) printf("%ld is automorphic\n", n);
    else printf("%ld is not automorphic\n", n);
    return 0;
}
