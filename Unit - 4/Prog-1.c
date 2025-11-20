/* Count lines, words, characters and spaces in a file */
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[260];
    printf("Enter filename: ");
    if (scanf("%259s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (!fp) { perror("fopen"); return 0; }

    long chars = 0, words = 0, lines = 0, spaces = 0;
    int in_word = 0;
    int c;
    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) {
            if (c == ' ') spaces++;
            in_word = 0;
        } else {
            if (!in_word) { words++; in_word = 1; }
        }
    }
    fclose(fp);

    printf("Characters: %ld\nWords: %ld\nLines: %ld\nSpaces: %ld\n", chars, words, lines, spaces);
    return 0;
}
