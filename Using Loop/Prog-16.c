/* Largest and smallest out of 100 numbers */
#include <stdio.h>
#include <float.h>
int main() {
    double x;
    double largest = -DBL_MAX, smallest = DBL_MAX;
    printf("Enter 100 numbers:\n");
    for (int i=0;i<100;i++) {
        if (scanf("%lf",&x)!=1) return 0;
        if (x > largest) largest = x;
        if (x < smallest) smallest = x;
    }
    printf("Largest = %.6g\nSmallest = %.6g\n", largest, smallest);
    return 0;
}
