#include "main.h"

/**
 * main - Print "_putchar"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	char name[] = "_putchar";

	while (i < 8)
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
