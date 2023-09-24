#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: char type string
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
					s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
					s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
					s[i - 1] == '}' || s[i - 1] == ' ')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
