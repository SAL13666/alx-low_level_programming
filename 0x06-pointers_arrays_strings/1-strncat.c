#include "main.h"
/**
  * _strncat- print a string reversed followed by new line
  * @src: the string
  * @dest: the string
  * @n: the number
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
int dlen = 0;
while (dest[dlen])
dlen++;

for (int i = 0; i < n && src[i]; i++)
{
dest[dlen] = src[i];
i++;
dlen++;
}
dest[dlen + n + 1] = '\0';

return(dest)
}



