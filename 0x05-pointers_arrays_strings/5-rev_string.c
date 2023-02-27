#include "main.h"
/**
  * rev_string- print a string reversed followed by new line
  * @s: the string
  * Return: void
  */
void rev_string(char *s)
{
int i = 0, j = 0;
while (s[i] != '\0')
{
i++;
}
i--;
j = i / 2;
while ( i > j)
{
char tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i--;
j++;
}
}
