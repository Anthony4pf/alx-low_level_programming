#include "lists.h"

/**
*free_listint2 - free a list and set head to NULL
*@head: head node of the list
*return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
