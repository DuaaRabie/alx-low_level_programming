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

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (nb--)
	{
		printf("%02hhx%s", *opc++, nb ? " " : "\n");
	}

	return (0);
}
