#include "main.h"

/**
 * print_line - check code.
 *
 *@n: variable
 *
 * Return: Always
 */

void print_line(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 1; num <= n; num++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}

	else
		_putchar('\n');
}
