#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint- function that add node to list
 * @head: the root of linked list
 * @n: the value of the node
 * Return: the count of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
if (head == NULL)
return (NULL);
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
