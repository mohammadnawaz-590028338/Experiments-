#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int words = 0, inWord = 0;

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch))
            inWord = 0;
        else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);
    printf("Total number of words: %d\n", words);

    return 0;
}
