#include "main.h"

/**
*binary_to_uint - converts a binary number to unsigned integer
*@b: binary number
*Return: integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0; value = 0;
	unsigned int i;

	for (i = 0; b[i] != '\0'; i++)
		len++;

	len--;

	for (i = len; i >= 0; i--, b++)
	{
		if (*b != '0' || *b != '1')
			return  (NULL);

		value = *b - '0';
		sum += value * (1 << i);
	}

	return (sum);
}
