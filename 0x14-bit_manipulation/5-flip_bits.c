#include "main.h"

int get_bit(unsigned long int n, unsigned int index);

/**
*flip_bits - returns the number of bits you would need to flip to get a new num
*@n: number
*@m: number
*Return: count
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	int digit1, digit2;

	if (n == 0 && m == 0)
		return (0);

	for (i = 0; i < 32; i++)
	{
		digit1 = get_index(n, i);
		digit2 = get_index(m, i);

		if (digit1 == digit2)
			continue;
		else
			count++;
	}

	return (count);
}

/**
*get_index - returns the value of the bit at a particular location
*@n: number
*@index: position of the bit
*Return: bit at index
*/

int get_index(unsigned long int n, unsigned int index)
{
	return (1 & (n >> index));
}
