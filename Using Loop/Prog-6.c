/* Print first n even numbers */
#include <stdio.h>
int main() {
    int n; printf("Enter n: "); if (scanf("%d",&n)!=1) return 0;
    for (int i=1;i<=n;i++) printf("%d ", 2*i);
    printf("\n");
    return 0;
}
