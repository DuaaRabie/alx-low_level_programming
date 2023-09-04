#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: arguments count
 * @av: arguments vector
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, count = 0;
	char *argcon;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
	}
	argcon = malloc(sizeof(char) * (count + ac + 1));
	if (argcon == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			argcon[k] = av[i][j];
			k++;
		}
		argcon[k] = '\n';
		k++;
	}
	argcon[k] = '\0';

	return (argcon);
}
