#include "main.h"

/**
*reverse_array -  function that reverses the content of an array of integers.
*@a: the array
*@n: number of elements of the array.
*/

void reverse_array(int *a, int n)
{
	int i;

	int b;

	i = 0;
	while (i < n)
	{
		n--;

		b = a[i];

		a[i] = a[n];

		a[n] = b;

		i++;
	}
}
