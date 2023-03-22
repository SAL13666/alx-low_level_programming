#include "3-calc.h"
#include <stdio.h>
/**
  *  op_add - adds a and b
  * @a: var 
  * @b: var
  *
  * Return: sum of a and b
  */

int op_add(int a, int b)
{
return (a + b);
}

/**
  * op_sub - subtract a from b
  * @a: var
  * @b: var
  *
  * Return: sub of a and b
  */

int op_sub(int a, int b)
{
return (a - b);
}



/**
  * op_mul - multipliy a by b
  * @a: var
  * @b: var
  *
  * Return: result of a * b
  */

int op_mul(int a, int b)
{
return (a * b);
}

/**
  * op_div - divide a by b
  * @a: var
  * @b: var
  *
  * Return: result of the division of a by b
  */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}


/**
  * op_mod - return the reminder of the division of a by b
  * @a: var
  * @b: var
  *
  * Return: the reminder
  */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}
