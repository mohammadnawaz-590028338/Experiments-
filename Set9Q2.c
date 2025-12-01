#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    printf("File Content:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
