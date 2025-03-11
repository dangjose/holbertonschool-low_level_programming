#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Duplicate string to new space in memory.
 *
 * @str: String to be duplicated
 *
 * Return: A pointer to memory with copied string, or NULL if it fails.
 */

char *_strdup(char *str)
{
	char *arr;
	int i;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	arr = malloc(sizeof(*arr) * length);

	if (arr == NULL)
		return (NULL);
	else if (str == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
