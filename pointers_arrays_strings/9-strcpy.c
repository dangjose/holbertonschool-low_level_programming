#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Copies str from 'src' to buffer 'dest'.
 *
 * @dest: Buffer to copy to.
 * @src: String to be copied.
 *
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (src[length])
		length++;
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
