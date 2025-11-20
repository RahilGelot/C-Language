/* Count boys and girls in 50 inputs (gender code 'M' or 'F') */
#include <stdio.h>
int main() {
    int boys=0, girls=0;
    char code;
    printf("Enter 50 gender codes (M/F) separated by spaces/newlines:\n");
    for (int i=0;i<50;i++) {
        if (scanf(" %c", &code)!=1) return 0;
        if (code=='M' || code=='m') boys++;
        else if (code=='F' || code=='f') girls++;
    }
    printf("Boys = %d\nGirls = %d\n", boys, girls);
    return 0;
}
