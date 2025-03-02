#include "main.h"

/**
 * *_strncat - Concatenates two strings.
 *
 * @src: String to be appended.
 * @dest: String to be apprended to.
 * @n: No. of bytes to be appended.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_length = 0;

	while (dest[dest_length])
	{
		dest_length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}
	if (src[i] != '\0')
	{
		dest[dest_length] = '\0';
	}
	return (dest);
}
