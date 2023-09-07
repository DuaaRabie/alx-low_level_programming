#include "main.h"

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]), num2= atoi(argv[2]), mul = num1 * num2;
	int *ptr;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	ptr = malloc(sizeof(int) * mul);
	memset(ptr, 0, sizeof(int) * mul);
	*ptr = mul;
	printf("%d\n",*ptr);

	return (0);

}
