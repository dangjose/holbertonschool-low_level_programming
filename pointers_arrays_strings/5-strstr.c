#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 *
 * @haystack: String to be searched.
 * @needle: Pointer that contains the string to search for.
 *
 * Return: Pointer to located substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
