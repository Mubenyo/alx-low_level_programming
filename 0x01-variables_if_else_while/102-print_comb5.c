#include <stdio.h>

int main(void) {
    int num1, num2;

    for (num1 = 0; num1 <= 99; num1++) {
        for (num2 = num1; num2 <= 99; num2++) {
            int tens1 = num1 / 10;
            int ones1 = num1 % 10;
            int tens2 = num2 / 10;
            int ones2 = num2 % 10;

            // Print tens digit of num1
            putchar('0' + tens1);
            // Print ones digit of num1
            putchar('0' + ones1);
            // Space separator
            putchar(' ');

            // Print tens digit of num2
            putchar('0' + tens2);
            // Print ones digit of num2
            putchar('0' + ones2);

            // Check if it's not the last combination
            if (num1 != 99 || num2 != 99) {
                // Comma and space separator
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}

