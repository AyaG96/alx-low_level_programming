#include "main.h"
/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function to check primality recursively
 *
 * @n: the number to check
 * @divisor: the current divisor being tested
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor <= n / 2)
	{
		if (n % divisor == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_helper(n, divisor + 1));
		}
	}
	else
	{
		return (1);
	}
}

