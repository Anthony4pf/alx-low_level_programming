#include "lists.h"

/**
*get_nodeint_at_index - get the index of the nth node of a list
*@head: head node of list
*@index: index of node
*Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);

		i++;
	}

	return (head);
}
