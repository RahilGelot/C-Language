/* 6. Convert hours into minutes */
#include <stdio.h>
void main() {
    double hours;
    printf("Enter hours: ");
    if (scanf("%lf", &hours)!=1) return 0;
    printf("%.6g hours = %.6g minutes\n", hours, hours * 60.0);
    return ;
}
