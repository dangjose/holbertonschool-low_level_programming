#include "main.h"

/**
 * is_prime_helper - Helper function to determine primality recursively.
 *
 * @n: Number being evalutated.
 * @divisor: Divisor being checked against.
 *
 * Return: Primality
 */

int is_prime_helper(int n, int divisor)
{
	if (n % divisor == 0)
		return (1);
	return (is_prime_helper(n, (divisor + 2)));
}

/**
 * is_prime_number - Determines if integer is a prime number:
 *
 * @n: Number being evalutated.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	return (is_prime_helper(n, 3));
}
