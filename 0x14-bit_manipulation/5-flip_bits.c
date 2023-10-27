#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int f = 0;

	for (; xor_result; xor_result >>= 1)
	{
		f += xor_result & 1;
	}

	return (f);
}
