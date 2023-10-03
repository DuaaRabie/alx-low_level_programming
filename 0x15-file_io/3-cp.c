#include "main.h"
#include <stdlib.h>

/**
 * check_errors - check the errors
 * @ac: arguments count
 * @av: arguments vector
 * @dto: file descriptor for the file_to
 * @dfrom: file descriptor for the file_from
 * @tc: closing to_file descripor check
 * @fc: closing from_file descripor check
 * Return: nothing
 */
void check_errors(int ac, char **av, int dfrom, int dto, int fc, int tc)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}
	if (dfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (dto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	if (tc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dfrom);
		exit(100);
	}
	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dto);
		exit(100);
	}
}

/**
 * main - copies file to another file
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0
 */
int main(int ac, char **av)
{
	int dfrom = 0, dto = 0, to_close = 0, from_close = 0, rcount = 1, wcount = 0;
	char data[1024];

	check_errors(ac, av, dfrom, dto, from_close, to_close);

	dfrom = open(av[1], O_RDONLY);
	check_errors(ac, av, dfrom, dto, from_close, to_close);

	dto = open(av[2], O_WRONLY | O_CREAT, 0664);
	check_errors(ac, av, dfrom, dto, from_close, to_close);

	while (rcount != 0)
	{
		rcount = read(dfrom, data, 1024);
		if (rcount == 0 || rcount == -1)
			break;
		wcount = write(dto, data, rcount);
		if (wcount != rcount)
			break;
	}
	from_close = close(dfrom);
	to_close = close(dto);
	check_errors(ac, av, dfrom, dto, from_close, to_close);

	return (0);
}
