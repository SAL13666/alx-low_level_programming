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
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[dlen+ i] = src[i];
dlen++;
}
dest[dlen + i] = '\0';
return (dest);
}
