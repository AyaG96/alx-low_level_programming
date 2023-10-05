#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in mem
 * which contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	int i, j;
	char *str2;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	str2 = malloc((i + 1) * sizeof(char));

	if (str2 == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		str2[j] = str[j];
	}
	return (str2);
}
