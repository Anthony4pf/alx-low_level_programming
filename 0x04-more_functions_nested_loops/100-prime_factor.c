#include <stdio.h>

/**
*main -  calculate largest prime factor of 612852475143
*
*Return: Success Always
*/

int main(void)
{
	long int n = 612852475143;

	long int p;

	for (p = 2; p < n; p++)
	{
		if (n % p == 0)
		{
			n = n / p;
		}
	}
	printf("%ld\n", p);

	return (0);
}
