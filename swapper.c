#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void swap(char str[], int l, int r)
{
    char t;
    t = str[l];
    str[l] = str[r];
    str[r] = t;
    return;
}

int main(int argc, char *argv[])
{
    int i;
    size_t j, len;

    for (i = 0; i < argc; i++) {
        len = strlen(argv[i]);
        for (j = 1; j < len; j++) {
            swap(argv[i], j - 1, j);
        }

        puts(argv[i]);
    }

    return 0;
}
