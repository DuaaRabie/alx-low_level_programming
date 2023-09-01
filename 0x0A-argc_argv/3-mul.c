#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name
 * @argc: the number of arguments
 * @argv: array of strings of the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Erorr\n");
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}

	return (0);
}
