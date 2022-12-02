#include "main.h"

/**
*clear_bit - sets the value of the bit at index to 0
*@n: number
*@index: index
*Return: 1 if successful or -1 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (0);

	*n = *n & ~(1 << index);
	return (1);
}
