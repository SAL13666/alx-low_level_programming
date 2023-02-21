#include "main.h"

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char a;
int n=0;
while (n < 10)
{
for (a ='a' ; a <= 'z'; a++)

_putchar(a);

_putchar('\n');
n++;
}
return (0);
}
