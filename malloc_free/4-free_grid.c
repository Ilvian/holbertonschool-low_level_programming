#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 *@grid: width of the array
 *@height: height of the array
 *Return: pointer to the two dimensional array
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
