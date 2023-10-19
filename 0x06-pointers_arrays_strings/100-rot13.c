#include <stdio.h>
#include <ctype.h>

char *rot13(char *str) {
    if (str == NULL) {
        return NULL;
    }

    for (char *ptr = str; *ptr; ++ptr) {
        char c = *ptr;

        if (isalpha(c)) {
            char base = (islower(c)) ? 'a' : 'A';
            *ptr = (c - base + 13) % 26 + base;
        }
    }

    return str;
}
