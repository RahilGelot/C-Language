/* Print first n odd numbers */
#include <stdio.h>
int main() {
    int n; printf("Enter n: "); if (scanf("%d",&n)!=1) return 0;
    int count=0, val=1;
    while(count < n) { printf("%d ", val); val+=2; count++; }
    printf("\n");
    return 0;
}
