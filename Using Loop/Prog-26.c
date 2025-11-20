/* Check Armstrong number (for 3-digit definition using cube of digits) */
#include <stdio.h>
#include <math.h>
int main() {
    long n; printf("Enter integer: "); if (scanf("%ld",&n)!=1) return 0;
    long tmp = n; if (tmp<0) tmp = -tmp;
    int digits[40], idx=0;
    long t = tmp;
    if (t==0) { printf("0 is Armstrong (0^3=0)\n"); return 0; }
    while (t) { digits[idx++] = t%10; t /= 10; }
    long sum = 0;
    for (int i=0;i<idx;i++) sum += (long)pow(digits[i], 3); /* this checks 3-digit armstrong condition */
    if (sum == (tmp)) printf("%ld is Armstrong (sum cubes = %ld)\n", n, sum);
    else printf("%ld is not Armstrong (sum cubes = %ld)\n", n, sum);
    return 0;
}
