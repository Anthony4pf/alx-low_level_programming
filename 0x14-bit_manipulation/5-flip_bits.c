#include "main.h"

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

	for (i = 0; i < 32; i++)
	{
		digit1 = get_bit(n, i);
		digit2 = get_bit(m, i);

		if (digit1 == digit2)
			continue;
		else
			count++;
	}

	return (count);
}
