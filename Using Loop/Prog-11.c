/* Print name 5 times */
#include <stdio.h>
int main() {
    char name[100];
    printf("Enter your name: ");
    if (scanf("%99s", name)!=1) return 0;
    for (int i=0;i<5;i++) printf("%s\n", name);
    return 0;
}
