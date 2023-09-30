#include "main.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 *
 * @x: int x
 * @y: int y
 *
 * Return: -1 or the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
