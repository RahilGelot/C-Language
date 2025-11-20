/* Sum of first n odd numbers */
#include <stdio.h>
int main() {
    int n; printf("Enter n: "); if (scanf("%d",&n)!=1) return 0;
    long sum=0;
    for (int i=0;i<n;i++) sum += (2*i+1);
    printf("Sum = %ld\n", sum);
    return 0;
}
