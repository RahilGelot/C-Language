/* Count +ve, -ve and zeros in 200 values */
#include <stdio.h>
int main() {
    int pos=0, neg=0, zero=0;
    double x;
    printf("Enter 200 numbers:\n");
    for (int i=0;i<200;i++) {
        if (scanf("%lf",&x)!=1) return 0;
        if (x > 0) pos++;
        else if (x < 0) neg++;
        else zero++;
    }
    printf("Positive=%d Negative=%d Zero=%d\n", pos, neg, zero);
    return 0;
}
