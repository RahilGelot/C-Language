/* Print name n times */
#include <stdio.h>
int main() {
    char name[100];
    int n;
    printf("Enter name and n: ");
    if (scanf("%99s %d", name, &n)!=2) return 0;
    for (int i=0;i<n;i++) printf("%s\n", name);
    return 0;
}
