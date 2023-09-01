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
	int add = 0;
	int count, i;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			for (i = 0; argv[count][i] != '\0'; i++)
			{
				if (!(argv[count][i] >= '0' && argv[count][i] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[count]);
		}
		printf("%d\n", add);
	}
	return (0);
}
