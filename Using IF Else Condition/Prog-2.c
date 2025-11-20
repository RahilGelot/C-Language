/* Find Largest and smallest of three values */
#include <stdio.h>
void main() {
    double a,b,c;
    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf",&a,&b,&c)!=3) return 0;
    double largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    double smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    printf("Largest = %.6g\nSmallest = %.6g\n", largest, smallest);
    return ;
}
