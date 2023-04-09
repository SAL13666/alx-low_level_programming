#include "main.h"
/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;
int multi = 1;
char *copy = b;
int len = 0;


if (b == 0)
return (0);
while (*copy)
{
len++;
copy++;
}
for (int i = len - 1; i >= 0; i--)
{
if (b[i] == '1')
{
number += multi;
}
else if (b[i] != '0')
return (0);
multi *= 2;
}
return (number);
}

