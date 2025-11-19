/* Find Net sales with tiered discount */
#include <stdio.h>
int main() {
    double gross;
    printf("Enter gross sales: ");
    if (scanf("%lf", &gross)!=1) return 0;
    double discount_rate;
    if (gross > 20000) discount_rate = 0.15;
    else if (gross > 10000) discount_rate = 0.10;
    else discount_rate = 0.05;
    double net = gross * (1.0 - discount_rate);
    printf("Discount rate = %.2f%%\nNet sales = %.6g\n", discount_rate*100, net);
    return 0;
}
