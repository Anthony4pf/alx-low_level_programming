#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*malloc_checked - allocates memory using malloc
*@b: size of memory
*Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
