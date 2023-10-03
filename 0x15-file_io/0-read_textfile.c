#include "main.h"

/**
 * read_textfile - reads a text file and
 * @filename: filename string
 * @letters: number of letters to print
 * Return: the number of printed and readed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char data[BUFSIZ];
	ssize_t rcount, wcount = 0;
	size_t tcount = 0, size;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (tcount < letters)
	{
		if (letters - wcount > BUFSIZ)
			size = BUFSIZ;
		else
			size = letters - tcount;

		rcount = read(fd, data, size);
		if (rcount == 0)
			return (tcount);
		if (rcount == -1)
			return (0);

		wcount = write(STDOUT_FILENO, data, size);
		if (wcount == -1)
			return (0);
		if (wcount == 0)
			return (wcount);

		tcount += rcount;
	}

	close(fd);

	return (tcount);
}
