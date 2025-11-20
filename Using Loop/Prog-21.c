/* Separate digits of a given number */
#include <stdio.h>
int main() {
    long n;
    printf("Enter a positive integer: ");
    if (scanf("%ld", &n)!=1) return 0;
    if (n < 0) n = -n;
    /* store digits in array to print from most significant */
    int digits[40], idx=0;
    if (n==0) { printf("0\n"); return 0; }
    while (n) { digits[idx++] = n % 10; n /= 10; }
    for (int i=idx-1;i>=0;i--) {
        printf("%d", digits[i]);
        if (i>0) printf(", ");
    }
    printf("\n");
    return 0;
}
