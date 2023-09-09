#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch1 = 'a';
	char ch2 = 'f';
	char ch3 = 'r';

	while (ch1 <= 'd')

	{
		putchar(ch1);
		ch1++;
	}

	while (ch2 <= 'p')

	{
		putchar(ch2);
		ch2++;
	}

	while (ch3 <= 'z')

	{
		putchar(ch3);
		ch3++;
	}

	putchar('\n');

	return (0);
}
