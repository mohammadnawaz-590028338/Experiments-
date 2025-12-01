#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("myfile.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fprintf(fp, "Hello, this is a sample text written to a file.\n");
    fclose(fp);

    printf("File created and text written successfully.\n");
    return 0;
}
