#include <stdio.h>

/**
 * main - entry point
 *
 * desription: prints the lowercase alphabet in reverse
 *
 * Return: return 0 and exit program.
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
