#include "lists.h"

/**
*free_list - free a list
*@head: head node of the list
*Return: void
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
