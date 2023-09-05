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
	int i, j, k = 0, words = 1;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			words++;
	}
	split = malloc(sizeof(char*) * words + 1);

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[k] == ' ' && (i == 0 || str[i - 1] == ' ' ))
		{
			int len = 0;
			while (str[i + len] != ' ' && str[i + len] != '\0')
				len++;

			split[j] = malloc(sizeof(char) * (len + 1));
			if (split[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(split[k]);
				free(split);
				return (NULL);
			}

			for (k = 0; k < len; k++)
				split[j][k] = str[i + k];
			split[j][k] = '\0';
			j++;
		}
	}

	split[j][0] = '\n';

	return (split);	
	
}
