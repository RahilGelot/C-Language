/* 9. Convert Rs into dollars (1$ = 48 Rs) */
#include <stdio.h>
int main() {
    double rs;
    printf("Enter amount in Rs: ");
    if (scanf("%lf", &rs)!=1) return 0;
    printf("%.6g Rs = %.6g $\n", rs, rs / 48.0);
    return 0;
}
