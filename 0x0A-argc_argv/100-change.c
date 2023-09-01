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
	int arg, i, count = 0;
	int array[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		arg = atoi(argv[1]);

		if (arg < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				while (arg >= array[i] && arg != 0)
				{
					arg -= array[i];
					count++;
				}
			}
			printf("%d\n", count);
		}

	}

	return (0);
}
