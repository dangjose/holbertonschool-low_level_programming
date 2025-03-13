#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - 2 dimensional array of integers.
 *
 * @width: Width of grid.
 * @height: Height of grid.
 *
 * Return: Pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
