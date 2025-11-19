/* 20. Area of a triangle (base * height / 2) */
#include <stdio.h>
int main() {
    double H, L;
    printf("Enter height and base: ");
    if (scanf("%lf %lf", &H, &L)!=2) return 0;
    printf("Area = %.6g\n", (H * L) / 2.0);
    return 0;
}
