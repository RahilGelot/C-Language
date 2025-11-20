/* 18. Area and perimeter of rectangle */
#include <stdio.h>
void main() {
    double L, B;
    printf("Enter length and breadth: ");
    if (scanf("%lf %lf", &L, &B)!=2) return 0;
    printf("Area = %.6g\nPerimeter = %.6g\n", L*B, 2*(L+B));
    return ;
}
