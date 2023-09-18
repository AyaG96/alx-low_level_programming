#include "main.h"

/**
 * swap_int - Function that swaps the value of two integers.
 * @a: Type int pointer
 * @b: Type int pointer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
