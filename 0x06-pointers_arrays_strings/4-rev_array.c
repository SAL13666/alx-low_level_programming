#include "main.h"
/**
  * reverse_array- print a string reversed followed by new line
  * @a: the string
  * @n: the number
  * Return: void
  */
void reverse_array(int *a, int n)
{
int tmp, i = 0, m = 0;
for (m = 1; a < n; m++)
{
m++;
}
while (i < n / 2)
{
tmp = a[i];
a[i] = a[m];
a[m] = tmp;
m--;
i++;
}
}
