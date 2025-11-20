/* Find Largest and smallest of two values */
#include <stdio.h>
void main() {
    double a,b;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf",&a,&b)!=2) return 0;
    if (a > b) printf("Largest = %.6g\nSmallest = %.6g\n", a, b);
    else if (b > a) printf("Largest = %.6g\nSmallest = %.6g\n", b, a);
    else printf("Both equal = %.6g\n", a);
    return ;
}
