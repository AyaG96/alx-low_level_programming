#include <stdio>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("0\n")
	}
	else 
	{
		for (i = 1; i < argc; i++)
		{
			if 
