#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all the numbers of base 16 in lowercase
 *
 * Return: return 0 and exit program.
 */
int main(void)
{
	int n;
	char l;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
