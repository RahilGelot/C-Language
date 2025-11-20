/* Read and print a file content line by line */
#include <stdio.h>

int main(void) {
    char filename[260];
    printf("Enter filename to read: ");
    if (scanf("%259s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (!fp) { perror("fopen"); return 0; }

    char line[1024];
    while (fgets(line, sizeof(line), fp)) {
        fputs(line, stdout);
    }

    fclose(fp);
    return 0;
}
