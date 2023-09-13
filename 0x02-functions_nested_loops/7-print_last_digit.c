#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @a: The integer from which to extract and print the last digit
 *
 * Return: The value of the last digit
 */

int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		b = -1 * (a % 10);
		_putchar(b + '0');
		return (b);
	}
	else
	{
		b = a % 10;
		_putchar(b + '0');
		return (b);
	}
}

