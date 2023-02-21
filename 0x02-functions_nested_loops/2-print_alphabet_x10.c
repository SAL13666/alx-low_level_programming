#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int n = 0;
char a;

while (n++ <= 9)
{
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
}
