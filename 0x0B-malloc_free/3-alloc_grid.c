#include "main.h"
/**
 * alloc_grid - two dimensional array
 * @width: width
 * @height: hwigt
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
		}
	}
	for (k = 0; k < height; k++)
		for (l = 0; l < width; l++)
			grid[k][l] = 0;
	return (grid);
}

