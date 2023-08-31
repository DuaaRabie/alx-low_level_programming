 #include "main.h"

/**
 * simetric_check - check the start and the end of a string
 * @s: address to string
 * @length: string length
 * Return: 1 if simetric || 0 if not simetric
 */
int simetric_check(char *s, int length)
{
	if (length == 1 || length == 2)
	{
		if (s[0] == s[length])
			return (1);
		else
			return (0);
	}
	else
	{
		if (s[0] == s[length])
		{
			return (simetric_check(s + 1, length - 2));
		}
		else
			return (0);
	}

}
/**
 * is_palindrome - check if the string is a palindrome
 * @s: address to the string
 * Return: 1 if string palindrome || 0 if not
 */
int is_palindrome(char *s)
{
	int last = strlen(s);

	if (*s == '\0')
		return (1);
	return (simetric_check(s, --last));
}
