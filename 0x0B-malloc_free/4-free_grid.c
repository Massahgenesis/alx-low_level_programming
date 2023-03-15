#include "main.h"
#include <stdlib.h>
/**
 *free_grid - Function that frees a 2 dimensional grid
 *@grid: An integer
 *@height: An integer
 */

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}
for (i = 0; i <= height; i++)
{
free((int *)grid[i]);
}
free(grid);
}
