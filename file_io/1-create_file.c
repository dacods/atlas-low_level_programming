#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: name of a file
 * @text_content: text
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
