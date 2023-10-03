#include "main.h"

/**
 * create_file - creates a text file
 * @filename: filename string
 * @text_content: text contents to write in file
 * Return: 1 success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wcount, cfile;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
	cfile = close(fd);
	if (cfile == -1)
		return (0);

	return (1);
}
