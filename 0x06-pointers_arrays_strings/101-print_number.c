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
	int num;

	num = n

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar ((num % 10) + '0');

}
