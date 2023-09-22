#include "main.h"

/**
 * string_toupper - Function that reverse the content of an array of int
 * @a: Type int
 * Return: string a
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && b[i] <= 'z')
		{
			a[i] = a[i] - 32;

		}
	}

	return (a);
}
