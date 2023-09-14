#include "main.h"

/**
 * print_diagonal - check code.
 *
 * @n: variable
 *
 * Return: Always
 */
void print_diagonal(int n)
{
	int num, s;

	if (n <= 0)

		_putchar('\n');
	else
	{
		for (num = 1; num <= n; num++)
		{
			for (s = 1; s <= num; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}



}
