#include "main.h"
/**
  * _strncpy- print a string reversed followed by new line
  * @src: the string
  * @dest: the string
  * @n: the number
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
