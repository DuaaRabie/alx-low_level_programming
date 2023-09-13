#include "3-calc.h"
#include <string.h>

/**
 * main - check the code
 * @argc: the number of arguments
 * @argv: pointer to the vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char sym[] = "+-*/%";
	int i;
	int (*opfun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < 5; i++)
	{	
		if (argv[2][0] == sym[i])
			break;
		else
		{
			if (i == 4)
			{
				printf("Error\n");
				exit(99);
			}
		}
	}
	opfun = get_op_func(argv[2]);
	printf("%d\n", opfun(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
