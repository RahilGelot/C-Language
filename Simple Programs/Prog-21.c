/* 21. Net salary with allowances 10% and deductions 3% of gross */
#include <stdio.h>
int main() {
    double gross;
    printf("Enter gross salary: ");
    if (scanf("%lf", &gross)!=1) return 0;
    double allowance = 0.10 * gross;
    double deduction = 0.03 * gross;
    double net = gross + allowance - deduction;
    printf("Allowance = %.6g\nDeduction = %.6g\nNet salary = %.6g\n", allowance, deduction, net);
    return 0;
}
