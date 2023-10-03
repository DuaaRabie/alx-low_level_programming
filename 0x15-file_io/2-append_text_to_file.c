#include "main.h"

/**
 * append_text_to_file - appends a text to file
 * @filename: filename string
 * @text_content: text contents to write in file
 * Return: 1 success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wcount;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			wcount += write(fd, text_content, 1);
			if (wcount == -1)
				return (-1);
			text_content++;
		}
	}

	close(fd);

	return (1);
}
