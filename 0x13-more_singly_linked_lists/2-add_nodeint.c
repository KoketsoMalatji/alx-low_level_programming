#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add a node at the beginning
 * Return: pointer to node
 * @head: points to pointer which points to list
 * @n: the int to put in new node data
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
