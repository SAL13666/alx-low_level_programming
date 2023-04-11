
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - 0
 * @filename: 1
 * @letters: 2
 * Return: 3
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer
ssize_t open1, write1, read1;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

open1 = open(filename, O_RDONLY);
read1 = read(o, buffer, letters);
write1 = write(STDOUT_FILENO, buffer, r);

if (open1 == -1 || write1 == -1 || read1 == -1 || w != r)
{
free(buffer);
return (0);
}

free(buffer);
close(o);

return (w);
}
