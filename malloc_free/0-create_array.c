#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Creates an array of and initializes it with a specific char.
 *
 * @size: Size of array.
 * @c: Character in which array is initialised.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(*arr) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	else if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
