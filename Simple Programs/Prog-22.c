/* 22. Net sales = gross - 10% discount */
#include <stdio.h>
void main() {
    double gross;
    printf("Enter gross sales: ");
    if (scanf("%lf", &gross)!=1) return 0;
    double net = gross * (1.0 - 0.10);
    printf("Net sales = %.6g\n", net);
    return ;
}
