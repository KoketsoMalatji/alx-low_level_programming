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
	dlistint_t *main;

	while (*h)
	{
		main = malloc(sizeof(dlistint_t));
		head = *h;
		main->n = n;

		if (idx == 0)
		{
			main->next = NULL;
			return (main);
		}
		while (head->next != NULL && idx - 1 > 0)
		{
			head = head->next;
			idx--;
		}
		if (head->next == NULL)
		{
			free(main);
			return (NULL);
		}
		main->next = head->next;
		main->next = main;
		return (main);
	}
	return (NULL);
}
