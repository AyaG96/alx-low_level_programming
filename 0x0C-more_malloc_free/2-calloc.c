#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: array length
 * @size: size of each element
 *
 * Return: pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
