#include <stdio.h>

/**
 * main - display numbers from 0 to 9
 * Return: return 0 and exit program.
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
