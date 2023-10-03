#include "main.h"

/**
 * read_textfile - reads a text file and
 * @filename: filename string
 * @letters: number of letters to print
 * Return: the number of printed and readed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char ch;
	size_t tcount = 0;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);

	while (tcount < letters && !feof(fd))
	{
		ch = fgetc(fd);
		if (ch == -1)
		{
			if (tcount != 0)
				return (tcount);
			return (0);
		}

		fputc(ch, stdout);

		tcount += 1;
	}

	fclose(fd);

	return (tcount);
}
