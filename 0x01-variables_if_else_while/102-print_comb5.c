#include <stdio.h>

#define MIN_DIGIT '0'
#define MAX_DIGIT '9'

void printPair(char tens, char ones, char t, char o) {
    putchar(tens);
    putchar(ones);
    putchar(' ');
    putchar(t);
    putchar(o);
}

int main(void) {
    char tens, ones, t, o;

    for (tens = MIN_DIGIT; tens <= MAX_DIGIT; tens++) {
        for (ones = MIN_DIGIT; ones <= MAX_DIGIT; ones++) {
            for (t = tens; t <= MAX_DIGIT; t++) {
                for (o = (tens == t) ? (ones + 1) : MIN_DIGIT; o <= MAX_DIGIT; o++) {
                    printPair(tens, ones, t, o);

                    if (!((tens == MAX_DIGIT && ones == MAX_DIGIT) && (t == MAX_DIGIT && o == MAX_DIGIT))) {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
