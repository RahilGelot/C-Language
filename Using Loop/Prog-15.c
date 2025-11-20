/* Sum and mean of n values */
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: "); if (scanf("%d",&n)!=1 || n<=0) return 0;
    double sum=0, x;
    printf("Enter %d values:\n", n);
    for (int i=0;i<n;i++) { if (scanf("%lf",&x)!=1) return 0; sum += x; }
    printf("Sum = %.6g\nMean = %.6g\n", sum, sum/n);
    return 0;
}
