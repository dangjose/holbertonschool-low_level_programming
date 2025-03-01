#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: String to be converted.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int length = 0;
	int conv_int = 0;
	int digit;

	while (s[length])
	{
		length++;
	}

	for (i = 0; i <= length; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '+')
			continue;
		if (s[i] == '-')
		{
			sign = sign * -1;
			continue;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (conv_int > (INT_MAX - digit) / 10)
        	                return (sign == 1) ? INT_MAX : INT_MIN;
                	conv_int = conv_int * 10 + digit;
			continue;
		}
	}
	return (conv_int * sign);
}
