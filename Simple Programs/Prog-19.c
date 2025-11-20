/* 19. Area of a circle (approx pi=22/7) */
#include <stdio.h>
void main() {
    double R;
    printf("Enter radius: ");
    if (scanf("%lf", &R)!=1) return 0;
    double area = (22.0/7.0) * R * R;
    printf("Area = %.6g\n", area);
    return ;
}
