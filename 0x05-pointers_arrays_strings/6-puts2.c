#include "main.h"
/**
  * puts2- print a string reversed followed by new line
  * @str: the string
  * Return: void
  */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
i++;
for (int j = 0; j < i; j+=2)
{
_putchar([j]);
}
}
