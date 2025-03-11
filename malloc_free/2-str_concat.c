#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to concatenated str, NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *s_cat;
	int s1_len = 0;
	int s2_len = 1;
	int len_total;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;

	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;

	len_total = s1_len + s2_len;

	s_cat = malloc(len_total);

	if (s_cat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		s_cat[i] = s1[i];
	}

	for (i = 0; i < s2_len; i++)
	{
		s_cat[i + s1_len] = s2[i];
	}
	return (s_cat);
}
