#include "dog.h"
/**
 * print_dog -  prints a struct dog
 *
 * @d: pointer to the struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", (*d).name != NULL ? (*d).name : "(nil)");
		printf("age: %f\n", (*d).age);
		printf("owner: %s\n", (*d).owner != NULL ? (*d).owner : "(nil)");
	}
}
