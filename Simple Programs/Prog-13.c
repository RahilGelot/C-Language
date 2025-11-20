/* 13. Convert bytes into KB, MB and GB */
#include <stdio.h>
void main() {
    double bytes;
    printf("Enter bytes: ");
    if (scanf("%lf", &bytes)!=1) return 0;
    printf("%.0f bytes = %.6g KB = %.6g MB = %.6g GB\n",
           bytes, bytes/1024.0, bytes/(1024.0*1024.0), bytes/(1024.0*1024.0*1024.0));
    return ;
}
