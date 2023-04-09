#include "main.h"
/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int number;

number = 0;
if (!b)
return (0);
for (int i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
number <<= 1;
if (b[i] == '1')
number += 1;
}
return (number);
}
