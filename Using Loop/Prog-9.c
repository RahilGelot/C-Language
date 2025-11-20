/* Sum of first n even numbers */
#include <stdio.h>
int main() {
    int n; printf("Enter n: "); if (scanf("%d",&n)!=1) return 0;
    long sum=0;
    for (int i=1;i<=n;i++) sum += 2*i;
    printf("Sum = %ld\n", sum);
    return 0;
}
