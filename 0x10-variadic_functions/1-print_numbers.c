#include <stdio.h>
#include <stdarg.h>

/**
*print_numbers - print numbers followed by a new line
*@separator: string
*@n: number of integers
*@...: variable arguments
*Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
		{
			printf("%s", separator);
		}

		printf("%d", va_arg(ap, int));
	}

	printf("\n");
}
