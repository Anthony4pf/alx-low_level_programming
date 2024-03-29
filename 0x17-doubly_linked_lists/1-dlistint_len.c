#include "lists.h"

/**
*dlistint_len - return the number of elements of a list
*@h: head node of the list
*Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
