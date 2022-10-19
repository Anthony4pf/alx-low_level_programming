#include "main.h"

/**
*print_alphabet_x10 - print the lowercase alphabets x10
*
*Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		count++;
	}
}
