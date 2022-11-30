#include "lists.h"

/**
*delete_nodeint_at_index - delete the node at a specified position
*@head: addressof the head node of the list
*@index: position of the node
*Return: 1 if successful or -1 otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}

	else
	{
		while (i < index - 1)
		{
			previous = current;
			current = current->next;
			i++;
		}
		if (current == NULL)
			return (-1);

		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
}
