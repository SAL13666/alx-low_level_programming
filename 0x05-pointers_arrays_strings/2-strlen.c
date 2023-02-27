#include "main.h"
/**
  * p_strlen - the length of a string
  *
  * Return: The length of an array of chars
  */
int _strlen(char *s)
{
int counter=0;
while(*s != '\0')
{
counter++;
}

return (counter);

}

