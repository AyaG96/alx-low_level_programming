#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: pointer to s
 * @accept: pointer to accept
 *
 * Return: pointer to the byte in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *t;

	t = &s[i];
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (t);
			}
		}
	}
	return ('\0');
}
