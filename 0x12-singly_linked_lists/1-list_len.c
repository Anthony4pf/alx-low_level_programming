#include "lists.h"

/**
*list_len - return the length of a list
*@h: head node of the list
*Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
