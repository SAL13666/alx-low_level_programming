#include "main.h"

/**
 * print_alphabet_x10 - 
 * Prints all possible combinations of single-digit numbers.
 */
void print_alphabet_x10(void)
{
char a;
int n = 0;
while (n < 10)
{
for (a = 'a' ; a <= 'z'; a++)

_putchar(a);

_putchar('\n');
n++;
}
}
