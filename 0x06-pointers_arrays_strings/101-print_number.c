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

	unsigned int integer = n;

	if  (n < 0)
	{
		integer = -n;
		_putchar('-');
	}

	else
	{
		integer = n;
	}

	if (integer / 10 != 0)
	{
		print_number(integer / 10);
	}

	_putchar((integer % 10) + '0');
}
