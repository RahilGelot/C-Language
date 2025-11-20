/* Factors of a given number */
#include <stdio.h>
int main() {
    int n; printf("Enter positive integer: "); if (scanf("%d",&n)!=1) return 0;
    if (n <= 0) { printf("Enter positive only\n"); return 0; }
    printf("Factors of %d: ", n);
    for (int i=1;i<=n;i++) if (n % i == 0) printf("%d ", i);
    printf("\n");
    return 0;
}
