#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: pointer to char type str
 * @s2: pointer to char type str
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] != '\0' && s2[c] != '\0'; c++)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
	}

	return (0);
}
