#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to type char str
 * @src: pointer to type char str
 * @n: number of elements to copy over
 *
 * Return: pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
