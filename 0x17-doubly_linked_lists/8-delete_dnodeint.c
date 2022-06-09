#include "lists.h"
/**
 * delete_dnodeint_at_index - function deletes node at given position
 *
 *@head: pointer to pointer of head of linked list
 *@index: unsigned int index position
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *loc, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	loc = *head;

	if (index == 0)
	{
		*head = loc->next;
		loc->prev = NULL;
		free(loc);
		return (1);
	}
	for (i = 0; loc != NULL && i < index - 1; i++)
		loc = loc->next;
	if (loc == NULL || loc->next == NULL)
		return (-1);

	next = loc->next->next;
	free(loc->next);
	loc->next = next;
	return (1);
}
