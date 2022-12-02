#include "main.h"

/**
*set_bit - sets the value of a bit at a given index to 1
*@n: number
*@index: index
*Return: 1 if successful or -1 if an error ocurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	else
		return (n | (1 << index);
}
