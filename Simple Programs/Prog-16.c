/* 16. Calculate simple interest I = P*R*N/100 */
#include <stdio.h>
void main() {
    double P, R, N;
    printf("Enter principal, rate%% per year, years: ");
    if (scanf("%lf %lf %lf", &P, &R, &N)!=3) return 0;
    double I = (P * R * N) / 100.0;
    printf("Interest = %.6g\n", I);
    return ;
}
