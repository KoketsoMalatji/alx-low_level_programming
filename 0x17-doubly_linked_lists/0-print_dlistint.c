#include "lists.h"

/**
 * print_dlistint - function prints all elements of dlistint_t list
 *
 *@h: pointer to head of linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
