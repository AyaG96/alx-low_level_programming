#include "main.h"

/**
 * print_numbers - print 0 - 9
 *
 *
 * Return: always
 */
void print_numbers(void)
{
	int l;

	for (l = '0'; l >= '9' ; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
