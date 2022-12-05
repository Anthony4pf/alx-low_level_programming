#include "main.h"

/**
*create_file - creates a file and write to it
*@filename: name of the file
*@text_content: content of the file
*Return: 1 on success or -1 if otherwise
*/

int create_file(const char *filename, char *text_content)
{
	int fd, x;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);

	x = write(fd, text_content, len);

	if (x < 0)
		return (-1);

	close(fd);

	return (1);
}
