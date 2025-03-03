#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: Pointer to the null-terminated byte string to be analyzed.
 * @accept: Pointer that contains the characters to search for.
 *
 * Return: A pointer to the resulting string dest.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int found;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				count++;
			}
		}
		if (!found)
		{
			return (count);
		}

	}
	return (count);
}
