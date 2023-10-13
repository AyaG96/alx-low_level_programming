#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *str;
	
	va_start(args, n);
	str = va_arg(args, const char*)

	for (i = 0; i < n; i++)
	{
		printf("%s", str != NULL ? str : "(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
