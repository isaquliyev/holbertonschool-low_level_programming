#include <stdlib.h>
/**
 * free_grid - make grid freeee
 * @grid: grid
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
