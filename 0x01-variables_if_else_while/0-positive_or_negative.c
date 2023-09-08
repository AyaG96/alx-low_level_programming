#include <stdio.h>

/**
 * main - Entry point
 *
 * desription: number is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	printf("please enter the number\n");
	scanf("%d", &n);

	if (n > 0)
	   printf("%d is positive\n", n);

	else if (n == 0)
	   printf("%d is zero\n", n);

	else if (n < 0)
	   printf("%d is negative\n", n);


	return (0);

}
