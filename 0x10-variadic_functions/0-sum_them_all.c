#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*sum_them_all - returns the sum of all it's parameters
*@n: fixed parameter
*@... - variable parameter
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
