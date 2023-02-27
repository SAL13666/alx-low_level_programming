#include "main.h"
/**
  * rev_string- print a string reversed followed by new line
  * @s: the string
  * Return: void
  */
void rev_string(char *s)
{
int counter = 0;

while (s[counter] != '\0')
{
counter++;
}

int l, i;
char *begin_ptr, *end_ptr, ch;
l = counter;

begin_ptr = s;
end_ptr = s + l - 1;

for (i = 0; i < (l - 1) / 2; i++) {

ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;

begin_ptr++;
end_ptr--;
}
}

