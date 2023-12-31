#include "main.h"

/**
 * multiply - multiply two numbers and print it
 * @n1: first number as string
 * @n2: second number as string
 * Return: nothing
 */
void multiply(char *n1, char *n2)
{
	int len1 = strlen(n1), len2 = strlen(n2), len = len1 + len2;
	int i, j, sum = 0, mul = 0;
	int *result;

	result = calloc(len, sizeof(int));
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (n1[i] - '0') * (n2[j] - '0');
			sum = mul + result[i + j + 1];
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}
	for (i = 0; i < len; i++)
	{
		if (result[i] != 0)
		{
			for (j = i; j < len; j++)
			{
				result[j] += '0';
				_putchar(result[j]);
			}
			break;
		}
	}
	_putchar('\n');
	free(result);
}


/**
 * main - entry point
 * @argc: count of arguments
 * @argv: vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
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
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(argv[1], argv[2]);

	return (0);

}
