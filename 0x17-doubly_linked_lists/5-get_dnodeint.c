#include "lists.h"

/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
*@head: address of the head of the list
*@index: nth nde to return
*Return: node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr = NULL;

	if (head == NULL)
		return (NULL);

	ptr = head;

	while (ptr)
	{
		if (i == index)
			return (ptr);

		ptr = ptr->next;
		i++;
	}

	ptr = NULL;
	return (NULL);
}
