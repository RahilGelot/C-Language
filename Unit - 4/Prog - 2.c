/* Accept lines from user and append to file (line by line) */
#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[260];
    printf("Enter filename to write (will append): ");
    if (scanf("%259s", filename) != 1) return 0;
    getchar(); /* consume newline */

    FILE *fp = fopen(filename, "a");
    if (!fp) { perror("fopen"); return 0; }

    char line[1024];
    printf("Enter lines (empty line to stop):\n");
    while (1) {
        if (!fgets(line, sizeof(line), stdin)) break;
        /* fgets keeps newline; if user presses Enter on empty line, line == "\n" */
        if (strcmp(line, "\n") == 0) break;
        fputs(line, fp);
    }

    fclose(fp);
    printf("Done. Appended to %s\n", filename);
    return 0;
}
