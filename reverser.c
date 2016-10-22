#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void swap(char str[], size_t l, size_t r)
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
        for (j = 0; j < (len - 1)/2; j++) {
            swap(argv[i], j, len - j - 1);
        }

        puts(argv[i]);
    }

    return 0;
}
