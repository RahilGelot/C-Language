/* Find Net salary with tiered allowances/deductions */
#include <stdio.h>
int main() {
    double gross;
    printf("Enter gross salary: ");
    if (scanf("%lf", &gross)!=1) return 0;
    double allowance = 0.0, deduction = 0.0;
    if (gross > 10000) { allowance = 0.10 * gross; deduction = 0.03 * gross; }
    else if (gross > 5000) { allowance = 0.07 * gross; deduction = 0.02 * gross; }
    else { allowance = 0.0; deduction = 0.0; } /* unspecified for <=5000 */
    double net = gross + allowance - deduction;
    printf("Allowance = %.6g\nDeduction = %.6g\nNet = %.6g\n", allowance, deduction, net);
    return 0;
}
