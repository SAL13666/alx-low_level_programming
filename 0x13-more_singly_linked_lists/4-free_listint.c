#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a listint_t list
 *
 * @head: the root of the list
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
listint_t *next_node;

while (head != NULL)
{
next_node = head->next;
free(head);
head = next_node;
}
}
