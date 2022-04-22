#include "lists.h"
/**
* free_list - function that freees a list
*@head: head of the list
*Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

	free(head->next);
	free(head->str);
	free(head);
}
