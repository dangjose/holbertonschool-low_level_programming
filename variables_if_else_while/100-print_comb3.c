/**
 * main - Entry point of the program
 *
 * Description: Print all different combinations of two digits.
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i == j || i > j)
			{
				continue;
			}
			else
			{
				putchar (i);
				putchar (j);
			}
			if (i == 56 && j == 57)
			{
				break;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
