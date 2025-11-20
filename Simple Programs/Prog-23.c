/* 23. Average of three subjects and total */
#include <stdio.h>
void main() {
    double a,b,c;
    printf("Enter marks of three subjects: ");
    if (scanf("%lf %lf %lf", &a, &b, &c)!=3) return 0;
    double total = a + b + c;
    double avg = total / 3.0;
    printf("Total = %.6g\nAverage = %.6g\n", total, avg);
    return ;
}
