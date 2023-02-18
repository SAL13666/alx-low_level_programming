/*
*hi
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
/* betty style doc for function main goes there */
int main(void)
{
char x;
char a;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);

if (x == 'z')
{
for (a = 'A'; a <= 'Z'; a++)
{
putchar(a);


}
}
}
putchar('\n');

return (0);
}
