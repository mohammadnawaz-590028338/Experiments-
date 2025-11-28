Set8Q4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* helper: remove trailing newline if present */
static void chop_newline(char *s) {
    size_t L = strlen(s);
    if (L > 0 && s[L-1] == '\n') s[L-1] = '\0';
}

int main(void) {
    int size1, add;
    printf("Enter initial size for the string: ");
    if (scanf("%d", &size1) != 1 || size1 <= 0) {
        fprintf(stderr, "Invalid size\n");
        return 1;
    }

    /* consume newline left by scanf */
    int ch = getchar();
    (void)ch;

    char *str = malloc((size_t)size1 + 1); // +1 for NUL
    if (str == NULL) {
        fprintf(stderr, "malloc failed\n");
        return 1;
    }

    printf("Enter a string (max %d characters):\n", size1);
    if (fgets(str, size1 + 1, stdin) == NULL) {
        fprintf(stderr, "Input error\n");
        free(str);
        return 1;
    }
    chop_newline(str);

    printf("\nYou entered: \"%s\"\n", str);

    printf("\nHow many more characters you want to add? ");
    if (scanf("%d", &add) != 1 || add < 0) {
        fprintf(stderr, "Invalid number\n");
        free(str);
        return 1;
    }

    /* consume newline */
    ch = getchar();
    (void)ch;

    if (add == 0) {
        printf("No change. Final string: \"%s\"\n", str);
        free(str);
        return 0;
    }

    size_t old_len = strlen(str);
    size_t new_size = (size_t)size1 + (size_t)add;
    char *tmp = realloc(str, new_size + 1);
    if (tmp == NULL) {
        fprintf(stderr, "realloc failed\n");
        free(str);
        return 1;
    }
    str = tmp;

    printf("Enter additional characters (max %d characters):\n", add);
    char *buf = malloc((size_t)add + 1);
    if (buf == NULL) {
        fprintf(stderr, "malloc failed\n");
        free(str);
        return 1;
    }
    if (fgets(buf, add + 1, stdin) == NULL) {
        fprintf(stderr, "Input error\n");
        free(buf);
        free(str);
        return 1;
    }
    chop_newline(buf);

    /* append */
    str[old_len] = '\0';            // ensure NUL present (should be)
    strncat(str, buf, (size_t)add); // safe append
    free(buf);

    printf("\nFinal string after append:\n\"%s\"\n", str);

    free(str);
    return 0;
}