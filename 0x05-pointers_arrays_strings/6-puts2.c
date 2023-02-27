#include "main.h"
/**
  * puts2- print a string reversed followed by new line
  * @str: the string
  * Return: void
  */
void puts2(char *str)
{
int i = 0,j = 0;
while (str[i] != '\0')
i++;
while (j < i)
{
_putchar(str[j]);
j += 2;
}
}
