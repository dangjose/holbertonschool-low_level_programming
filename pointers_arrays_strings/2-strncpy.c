#include "main.h"

/**
 * *_strncpy - Copies a string
 *
 * @src: String to be copied.
 * @dest: String to be copied to.
 * @n: No. of bytes to be copied.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
