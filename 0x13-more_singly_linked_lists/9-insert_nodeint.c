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
	listint_t *ptr, *temp;

	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		ptr = *head;

		while (i < idx - 1)
		{
			ptr = ptr->next;
			i++;
		}
		if (ptr == NULL)
			return (NULL);
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}
