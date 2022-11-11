#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_realloc - reallocate a memory block using malloc and free
*@ptr: dynamically allocated memory
*@old_size: old size
*@new_size: new size
*Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrout;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptrout = malloc(new_size);

		if (ptrout == NULL)
			return (NULL);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size && ptr != NULL)
	{
		ptrout = malloc(new_size);

			if (ptrout == NULL)
				return (NULL);

		for (i = 0; i < old_size; i++)
		{
			ptrout[i] = *((char *)ptr + 1);
		}
	}

	free(ptr);

	return (ptrout);
}
