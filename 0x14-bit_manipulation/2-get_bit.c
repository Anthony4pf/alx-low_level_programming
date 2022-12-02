#include "main.h"

/**
*get_bit - returns the value of the bit at a particular location
*@n: number
*@index: position of the bit
*Return: bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	else
		return (1 & (n >> index));
}
