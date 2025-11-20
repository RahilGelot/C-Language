/* 7. Convert minutes into hours */
#include <stdio.h>
void main() {
    double minutes;
    printf("Enter minutes: ");
    if (scanf("%lf", &minutes)!=1) return 0;
    printf("%.6g minutes = %.6g hours\n", minutes, minutes / 60.0);
    return ;
}
