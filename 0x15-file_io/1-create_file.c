#include "main.h"

/**
 * create_file - creates a text file
 * @filename: filename string
 * @text_content: text contents to write in file
 * Return: 1 success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wcount;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_TRUNC | O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
		return (-1);

	while (*text_content != '\0')
	{
		wcount += write(fd, text_content, 1);
		if (wcount == -1)
			return (-1);
		text_content++;
	}

	close(fd);

	return (1);
}
