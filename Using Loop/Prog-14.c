/* Sum and mean of 10 values */
#include <stdio.h>
int main() {
    double x, sum=0;
    printf("Enter 10 values separated by space/newline:\n");
    for (int i=0;i<10;i++) { if (scanf("%lf",&x)!=1) return 0; sum += x; }
    printf("Sum = %.6g\nMean = %.6g\n", sum, sum/10.0);
    return 0;
}
