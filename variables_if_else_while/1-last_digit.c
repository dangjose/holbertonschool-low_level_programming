/**
 * main - Entry point of the program
 *
 * Description: Print the last digit of the number stored in the variable n.
 * Return: 0
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	if (last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	else if (last_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	return (0);

}
