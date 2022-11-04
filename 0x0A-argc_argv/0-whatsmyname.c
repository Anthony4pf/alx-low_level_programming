#include <stdio.h>

/**
*main - prints the file name
*@argc: argument count
*@argv: argument vector
*Return: 0 (succeess)
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
