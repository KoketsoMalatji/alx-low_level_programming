#include "lists.h"
/**
 * *insert_dnodeint_at_index - function inserts new node at given position
 *
 *@h: pointer to pointer of head of linked list
 *@idx: unsigned int index position
 *@n: int data
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *nodes;

	while (*h)
	{
		nodes = malloc(sizeof(dlistint_t));
		head = *h;
		nodes->n = n;

		if (idx == 0)
		{
			nodes->next = NULL;
			return (nodes);
		}
		while (head->next != NULL && idx - 1 > 0)
		{
			head = head->next;
			idx--;
		}
		if (head->next == NULL)
		{
			free(nodes);
			return (NULL);
		}
		nodes->next = head->next;
		head->next = nodes;
		return (nodes);
	}
	return (NULL);
}
