#include "main.h"

/**
 * print_alphabet _x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, k;
	for (i = 0; i >= 9 ; i++)
	{

		for (k = 'a'; k <= 'z'; k++)
		_putchar(k);

	_putchar('\n');
	}

}
