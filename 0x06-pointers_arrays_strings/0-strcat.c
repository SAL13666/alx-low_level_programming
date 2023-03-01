#include "main.h"
/**
  * _strcat- print a string reversed followed by new line
  * @str: the string
  * @dest: the string
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
int dlen = 0;
while (dest[dlen] != '\0')
{
dlen++;
}
for (int i = 0; src[i] != '\0'; i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[dlen + 1] = '\0';
return (dest);
}
