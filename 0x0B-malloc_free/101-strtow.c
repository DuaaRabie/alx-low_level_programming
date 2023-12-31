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
	int i, j, k = 0, words = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
	}
	if (words == 0)
		return (NULL);
	split = malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
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
	split[j] = NULL;
	return (split);

}
