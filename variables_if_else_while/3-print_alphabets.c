/**
 * main - Entry point of the program
 *
 * Description: Print alphabet in lowercase and then uppercase.
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
