#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: pointer to s
 * @accept: pointer to accept
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			if (s[i] == ' ')
			{
			return (count);
			}	
		}
	}
	return (count);

}
