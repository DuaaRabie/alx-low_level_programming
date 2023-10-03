#include "main.h"
#include <stdlib.h>

/**
 * copy_file - copies file to another file
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	int dfrom, dto, close_check, rcount = 1, wcount = 0;
	char data[1024];
	size_t tcount = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}
	dfrom = open(av[1], O_RDONLY);
	if (dfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	dto = open(av[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (dto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(98);
	}
	while (rcount != 0)
	{
		rcount = read(dfrom, data, 1024);
		if (rcount == 0)
			return (tcount);
		if (rcount == -1)
			return (0);
		wcount = write(dto, data, rcount);
		if (wcount == -1)
			return (0);
		if (wcount != rcount)
			return (0);
	}
	close_check = close(dfrom);
	if (close_check == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dfrom);
		exit(100);
	}
	close_check = close(dto);
	if (close_check == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dto);
		exit(100);
	}

	return (0);
}
