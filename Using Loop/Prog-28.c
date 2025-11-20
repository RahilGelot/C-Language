/* Check perfect number */
#include <stdio.h>
int main() {
    int n; printf("Enter positive integer: "); if (scanf("%d",&n)!=1) return 0;
    if (n<=1) { printf("%d is not perfect\n", n); return 0; }
    int sum = 1;
    for (int i=2;i<=n/2;i++) if (n%i==0) sum += i;
    if (sum == n) printf("%d is a perfect number\n", n);
    else printf("%d is not perfect\n", n);
    return 0;
}
