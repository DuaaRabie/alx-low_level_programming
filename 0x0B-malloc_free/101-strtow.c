#include "main.h"

/**
 * strtow - split string into words
 * @str: the string to split
 *
 * Return: pointer to splited words
 */
char **strtow(char *str)
{
	char **split;
	int *count = NULL;
	int i, j, k = 0, words = 0, c = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		count[c] = 0;
		for (j = 0; str[i] != ' '; j++)
		{
			count[c] +=1;
		}
		c++;
		words += 1;
	}
	count[c] += 1;

	split = malloc(sizeof(char) * words);
	for (i = 0; i < c; i++)
	{
		split[i] = malloc(sizeof(char) * (count[i] + 1));
	}

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		if (str[k] == ' ')
			split[i][j] = '\n';
		else
			split[i][j] = str[i];
	}
	split[i][j] = '\n';

	return (split);	
	
}
