#include <stdio.h>
#include <stdarg.h>

/**
*print_strings - prints strings followed by a new line
*@separator: separating string
*@n: number of strings
*@...: strings
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *p;

	va_list(ap);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		p = va_arg(ap, char *);

		printf("%s", (p == NULL) ? "(nil)" : p);

	}

	printf("\n");
}
