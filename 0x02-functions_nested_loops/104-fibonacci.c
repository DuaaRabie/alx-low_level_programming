#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long f;
	int i;

	for (i = 0; i < 99; i++)
	{
		f = f1 + f2;
		printf("%lu", f);
		f1 = f2;
		f2 = f;
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
