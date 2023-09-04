#include "main.h"

/**
 * free_grid - free two dimentional grid
 * @grid: pointer to the array
 * @height: number of columns
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
