#include "main.h"

/**
*read_textfile - read a text file and prints it to the POSIX standard output
*@filename: name of the file
*@letters: number of letters it should read and print
*Return: number of characters written
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, j;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	i = read(fd, buffer, letters);

	if (i < 0)
		return (0);

	close(fd);
	/**
	*fd  = open(filename, O_WRONLY);
	*if (fd < 0)
		*return (0);
	*/

	j = write(STDOUT_FILENO, buffer, i);

	if (j < 0)
		return (0);

	return (j);
}
