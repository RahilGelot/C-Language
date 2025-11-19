/* 10. Convert dollars into pound (via Rs): 1$=48Rs, 1 pound=70Rs */
#include <stdio.h>
int main() {
    double dollars;
    printf("Enter amount in dollars: ");
    if (scanf("%lf", &dollars)!=1) return 0;
    double rs = dollars * 48.0;
    double pound = rs / 70.0;
    printf("%.6g $ = %.6g pounds\n", dollars, pound);
    return 0;
}
