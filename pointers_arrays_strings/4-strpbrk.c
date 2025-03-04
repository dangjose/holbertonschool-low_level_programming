#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Finds the first match of any character from one string in another
 *
 * @s: String to be searched.
 * @accept: Pointer that contains the characters to search for.
 *
 * Return: Pointer to the first match in s or NULL if no accept byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + 1);
			}
		}
		s++;
	}
	return (NULL);
}
