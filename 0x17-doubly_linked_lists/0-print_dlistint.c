#include "lists.h"

/**
* print_dlistint - print all the elements of a doubly linked list
*@h: head node of the list
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr->next != NULL)
	{
		count++;
		printf("%d", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
