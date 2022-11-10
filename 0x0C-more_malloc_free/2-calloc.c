#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_calloc - allocates memory for an arry using callloc
*@nmemb: number of elements
*@size: size of the array
*Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	
	if(ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
