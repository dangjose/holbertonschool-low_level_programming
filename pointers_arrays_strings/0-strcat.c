#include "main.h"

/**
 * *_strcat - Concatenates two strings.
 *
 * @src: String to be appended.
 * @dest: String to be apprended to.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int src_length = 0;
	int dest_length = 0;

	while (dest[dest_length])
	{
		dest_length++;
	}
	while (src[src_length])
	{
		src_length++;
	}
	for (i = 0; i < src_length; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}
	dest[dest_length] = '\0';
	return (dest);
}
