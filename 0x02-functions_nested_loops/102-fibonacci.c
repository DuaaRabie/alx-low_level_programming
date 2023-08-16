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

	for (i= 1;  i <= 50; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		printf("%d", f);
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
