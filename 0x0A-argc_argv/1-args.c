#include <stdio.h>

/**
 * main - prints the name
 * @argc: the number of arguments
 * @argv: array of strings of the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
