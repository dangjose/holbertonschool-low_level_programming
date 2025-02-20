/**
 * main - Entry point of the program
 *
 * Description: Print single digit numbers separated by ','
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar('\n');
	return (0);
}
