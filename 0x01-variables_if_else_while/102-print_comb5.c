#include <stdio.h>

int main(void) {
    for (int num1 = 0; num1 <= 99; num1++) {
        for (int num2 = num1 + 1; num2 <= 99; num2++) {
         
            int tens1 = num1 / 10;
            int ones1 = num1 % 10;
            int tens2 = num2 / 10;
            int ones2 = num2 % 10;

  
            putchar('0' + tens1);
            putchar('0' + ones1);
            putchar(' ');
            putchar('0' + tens2);
            putchar('0' + ones2);

        
            if (!(num1 == 99 && num2 == 98)) {
           
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}

