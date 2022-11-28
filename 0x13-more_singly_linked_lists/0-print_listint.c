#include "lists.h"

/**
*print_listint - print a singly linked list
@h: head node of the list
*Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
