#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a d list
 * @head: the head
 * @n: the int to add
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*declarations */
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *newhead;

	/* check for null && malloc fail, free new if it exists, return NULL */
	if (!head || !new)
		return (newhead ? free(newhead), NULL : NULL);
	/* assign some things to new */
	newhead->n = n;
	newhead->next = NULL;
	/* if there are no other nodes make new the first and last */
	if (!*head)
	{
		newhead->prev = NULL;
		*head = newhead;
	}
	/* otherwise, find the end and install new */
	else
	{
		n = *head;
		while (n->next)
		{
			n = n->next;
		}
		n->next = newhead;
		new->prev = n;
	}
	return (newhead);
}
