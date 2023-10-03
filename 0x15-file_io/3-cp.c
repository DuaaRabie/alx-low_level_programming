#include "main.h"

/**
 * copy_file - copies file to another file
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	int dfrom, dto, close_check;
	char data[1024];


	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", av[1], av[2]);
		exit(97);
	}

	dfrom = open("test.txt", O_RDONLY);
	if (dfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	dto = open("test.txt", O_WRONLY | O_TRUNC);
	if (dto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(98);
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


}
