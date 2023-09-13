#include "3-calc.h"

/**
 * main - check the code
 * @argc: the number of arguments
 * @argv: pointer to the vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*opfun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opfun = get_op_func(argv[2]);
	if (opfun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", opfun(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
