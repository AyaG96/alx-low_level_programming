#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: pointer to type char str
 * @src: pointer to type char str
 * @n: number of elements to concatenate in
 *
 * Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++)

		dest[i] = src[j];

	return (dest);

}
