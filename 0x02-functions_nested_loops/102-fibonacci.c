#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
	unsigned int f1 = 0;
	unsigned int f2 = 1;
	unsigned int f;
	int i;

	for (i = 1;  i <= 50; i++)
	{
		f = f1 + f2;
		printf("%u", f);
		f1 = f2;
		f2 = f;
		if (f == 50)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
