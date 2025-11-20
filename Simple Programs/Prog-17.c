/* 17. Area and perimeter of square */
#include <stdio.h>
void main() {
    double L;
    printf("Enter side length L: ");
    if (scanf("%lf", &L)!=1) return 0;
    printf("Area = %.6g\nPerimeter = %.6g\n", L*L, 4*L);
    return ;
}
