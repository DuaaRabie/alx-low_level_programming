#include "main.h"
/**
 * more_numbers - prints numbers form 0 to 14
 * Return: void
*/
void more_numbers(void)
{
	int i;
	int j;
	char n1;
	char n2;

	for (j = 0; j < 10; j++)
	{
		n1 = 48;
		n2 = 47;
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				n1 = 49;
				n2++;
			}
			_putchar(n1);
			if (i >= 10)
			{
			_putchar(n2);
			}
			n1++;
		}

	_putchar('\n');
	}
}
