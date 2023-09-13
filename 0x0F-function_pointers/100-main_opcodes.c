#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *)main;
	int nb = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (nb < 0 || argv[1] == NULL)
	{
		printf("Error\n");
		exit(2);
	}

	if (argv[1] != NULL)
	{
		while (nb && *opc)
		{
			printf("%02hhx", *opc);
			*opc++;
			if (nb > 1)
				printf(" ");
			else
				printf("\n");
			nb--;
		}
	}

	return (0);
}
