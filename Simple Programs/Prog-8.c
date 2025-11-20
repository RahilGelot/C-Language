/* 8. Convert dollars into Rs (1$ = 48 Rs) */
#include <stdio.h>
void main() {
    double dollars;
    printf("Enter amount in dollars: ");
    if (scanf("%lf", &dollars)!=1) return 0;
    printf("%.6g $ = %.6g Rs\n", dollars, dollars * 48.0);
    return ;
}
