/**
 * main - Entry point of the program
 *
 * Description: Print single digit numbers of base 10
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
