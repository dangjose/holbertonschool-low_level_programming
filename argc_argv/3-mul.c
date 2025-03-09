#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 *
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: 1 if program receives less than 2 args, 0 otherwise.
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		int product = x * y;

		printf("%d\n", product);
	}
	return (0);
}
