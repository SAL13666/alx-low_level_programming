#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - return the value of the given equation
  * @argc: number of argument
  * @argv: an array of argument
  *
  * Return: the result
  */


int main(int argc, char *argv[])
{
int (*callc)(int, int);

if (argc != 4)
{
printf ("Error\n");
exit(98);
}
callc = get_op_func(argv[2]);


if (!callc)
{
printf("Error\n");
exit(99);
}
printf("%d\n", callc(atoi(argv[1]), atoi(argv[3])));
return (0);
}
