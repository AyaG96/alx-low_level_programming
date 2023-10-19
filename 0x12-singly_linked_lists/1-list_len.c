#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: pointer to list_t
 *
 * Return: he number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		h = h->next;
		e++;
	}
	return (e);
}
