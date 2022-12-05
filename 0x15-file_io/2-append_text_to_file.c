#include "main.h"

/**
*append_text_to_file - append a text at the end of a file
*@filename: name of the file
*@text_content: text to be appended
*Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		x = write(fd, text_content, len);

		if (x < 0)
			return (-1);
	}

	close(fd);

	return (1);
}
