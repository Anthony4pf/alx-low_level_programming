#include "lists.h"

/**
*listint_len - return the number if elemnts in a list
*@h: head node of the list
*Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
