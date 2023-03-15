#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *alloc_grid - Function that returns a pointer to a 2 dimensional array
 *@width: An integer
 *@height: An integer
 *Return:g
 */
int **alloc_grid(int width, int height)
{
int **g;
int w, h, i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
g = malloc(sizeof(int *) * height);
if (g == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
g[i] = malloc(sizeof(int) * width);
if (g[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(g[j]);
}
free(g);
return (NULL);
}
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
{
g[h][w] = 0;
}
}
return (g);
}
