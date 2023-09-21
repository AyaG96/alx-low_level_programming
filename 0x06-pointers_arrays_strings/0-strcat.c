#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to the destination intput
 * @src: pointer to the source input
 *
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a]; a++);
	

	for (b = 0; src[b]; b++)
	{
		dest[a] = src[b];
		a++;
	}

	return (dest);
}
