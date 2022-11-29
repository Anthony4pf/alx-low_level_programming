#include "lists.h"

/**
*free_listint - free the memory allocated for a list
*@head: head node of the list
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
