#include <stdio.h>

/**
 * main - entry point
 *
 * description:  print combinations of single digit-numbers
 *
 * Return: return 0 and exit program
 */

int main(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
