#include "lists.h"

/**
*insert_nodeint_at_index - insert a new node at nth position
*@head: address of head node
*@idx: positon of node
*@n: data
*Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *ptr;
	unsigned int i = 0;

	ptr = *head;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}
