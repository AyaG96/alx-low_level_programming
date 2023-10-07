#include "main.h"
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2 to concatenate
 *
 * Return: pointer to a newly allocated space in memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; j < n && s2[j] != '\0'; j++)
		;
	s3 = malloc((i + j + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		s3[i + j] = s2[j];

	return (s3);
}
