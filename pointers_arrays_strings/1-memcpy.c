#include "main.h"

/**
 * _memcpy - Copies memory area.
 *
 * @dest: Memory area to be copied to.
 * @src: Memory are to be copied.
 * @n: No. of bytes to be copied.
 *
 * Return: A pointer to the memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] =  src[i];
	}
	return (dest);
}
