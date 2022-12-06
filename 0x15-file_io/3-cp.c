#include "main.h"

/**
*main - copy the contents of one file to another
*@argc: argument counter
*@argv: argument vector
*Return: success
*/

int main(int argc, char *argv[])
{
	int fd_r, fd_w, x, y, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98); }
	x = read(fd_r, buf, BUFSIZ);
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98); }
	fd_w = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd_w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99); }
	y = write(fd_w, buf, x);
	if (y < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99); }
	m = close(fd_r);
	n = close(fd_w);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100); }
	return (0); }
