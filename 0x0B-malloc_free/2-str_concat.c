#include "main.h"
/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *s3;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	len = i + j + 1;

	s3 = malloc(len * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		s3[i + j] = s2[j];

	return (s3);
}
