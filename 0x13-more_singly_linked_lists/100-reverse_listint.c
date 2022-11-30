#include "lists.h"

/**
*reverse_listint - reverse the nodes of a list
*@head: address of the head node of the list
*Return: poinetr to the new head of the list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *temp2 = NULL;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next  = temp;
		temp = *head;
		*head = temp2;
	}

	*head = temp;

	return (*head);
}
