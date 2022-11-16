#include <stdio.h>
#include <stdlib.h>

/**
*int_index - searches for the index
*@array: array to be searched
*@size: size of the array
*@cmp: function pointer
*Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value;

	if (array != NULL || cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			value = cmp(array[i]);

			if (value == 1)
			{
				return (i);
			}
		}

	}

	return (-1);
}
