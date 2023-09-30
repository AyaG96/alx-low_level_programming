#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: a given number
 *
 * Return: -1 or the result
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - helper function for calculating square root recursively
 *
 * @n: a given number
 * @guess: the current guess for the square root
 *
 * Return: -1 or the result
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}
