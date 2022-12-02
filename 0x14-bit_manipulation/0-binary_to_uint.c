#include "main.h"

/**
*binary_to_uint - converts a binary number to an unsigned integer
*@b: the binary number
*Return: unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int digit = 0, value = 0, power = 0, sum = 0;
	const char *s;

	if (b == NULL)
		return (0);

	s = b;

	while (*b != '\0')
	{
		b++;
	}
	b--;

	while (b >= s)
	{
		if (*b < '0' || *b > '1')
			return (0);

		digit = *b - '0';
		value = digit * (1 << power);
		sum += value;
		b--;
		power++;
	}

	return (sum);
}
