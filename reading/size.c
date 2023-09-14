#include <stdio.h>
/**
 * main - using sizeof 
 * Returns: 0
 */
int main(void)
{
	int n;

	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of my vvariable n on my computer: %lu bytes\n", sizeof(n));

	return (0);
}
