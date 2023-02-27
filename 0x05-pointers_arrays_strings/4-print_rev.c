#include "main.h"
/**
  * print_rev- print a string reversed followed by new line
  * @s: the string 
  * Return: void
  */
void print_rev(char *s)
{
int counter = 0;
while(s[counter] != '\0')
{
counter++;
}
for(counter -= 1; counter >= 0; counter--)
{
_putchar(s[counter]);
}
_putchar('\n');
}
