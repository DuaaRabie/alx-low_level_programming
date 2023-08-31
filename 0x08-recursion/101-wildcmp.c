 #include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical || 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);

	if (l1 <= 1)
	{
		;
	}

	if (l1 == l2)
	{
		if (s1[0] == s2[0])
			return (wildcmp(s1 + 1, s2 + 1));
		else if (s2[0] == '*')
			return (wildcmp(s1 + 1, s2 + 1));
		return (0);
	}
	else
	{
		if (s2[0] == '*')
		{
			if (l2 < l1)
				return (wildcmp(s1 + 1, s2));
			else if (l2 > l1)
				return (wildcmp(s1, s2 + 1));
			else
				return (wildcmp(s1 + 1, ++s2));
		}

		return (0);
	}
}
