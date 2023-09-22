#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @n: the integer to be printed
 *
 * Return: Always 0
 */

void print_number(int n)
{
	int n;

	if  (n < 0)
	{
		integer = -n;
		_putchar('-');
	}


	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
