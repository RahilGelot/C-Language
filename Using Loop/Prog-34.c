/* Fibonacci series up to n terms */
#include <stdio.h>
int main() {
    int n; printf("Enter n: "); if (scanf("%d",&n)!=1 || n<=0) return 0;
    long a=1, b=1;
    if (n >= 1) printf("%ld ", a);
    if (n >= 2) printf("%ld ", b);
    for (int i=3;i<=n;i++) {
        long c = a + b;
        printf("%ld ", c);
        a = b; b = c;
    }
    printf("\n");
    return 0;
}
