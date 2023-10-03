#include "main.h"

/**
 * read_textfile - reads a text file and
 * 		   prints it to the POSIX standard output.
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
			return (tcount);

		fputc(ch, stdout);

		tcount += 1;
	}

	fclose(fd);

	return (tcount);
}
