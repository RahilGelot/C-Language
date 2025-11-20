/* Store roll no and name as CSV for Excel */
#include <stdio.h>

int main(void) {
    char filename[260];
    printf("Enter CSV filename to create/append: ");
    if (scanf("%259s", filename) != 1) return 0;
    getchar(); /* consume newline */

    FILE *fp = fopen(filename, "a");
    if (!fp) { perror("fopen"); return 0; }

    while (1) {
        int roll;
        char name[200];
        char choice;

        printf("Enter roll number: ");
        if (scanf("%d", &roll) != 1) break;
        getchar(); /* newline */
        printf("Enter name (no commas please): ");
        if (!fgets(name, sizeof(name), stdin)) break;
        /* remove trailing newline */
        size_t len = 0;
        while (name[len]) len++;
        if (len && name[len-1] == '\n') name[len-1] = '\0';

        /* write as CSV */
        fprintf(fp, "%d,%s\n", roll, name);

        printf("Add another record? (y/n): ");
        if (scanf(" %c", &choice) != 1) break;
        getchar();
        if (choice != 'y' && choice != 'Y') break;
    }

    fclose(fp);
    printf("Records saved to %s (open with Excel).\n", filename);
    return 0;
}
