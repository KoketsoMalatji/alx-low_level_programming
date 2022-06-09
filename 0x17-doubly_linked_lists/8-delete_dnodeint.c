#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success  1.
 *         Otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *loc = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (loc == NULL)
			return (-1);
		loc = loc->next;
	}

	if (loc == *head)
	{
		*head = loc->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		loc->prev->next = loc->next;
		if (loc->next != NULL)
			loc->next->prev = loc->prev;
	}

	free(loc);
	return (1);
}
