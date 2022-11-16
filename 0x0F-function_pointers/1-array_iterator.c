#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - executes a function on each element of an array
*@array: pointer to first element of the array
*@size: size of the array
*@action: function
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL || array != NULL)
	{

		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}
}
