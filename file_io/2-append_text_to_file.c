#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: name of a file
 * @text_content: text
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t result;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	result = write(fd, text_content, strlen(text_content));

	if (result != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
