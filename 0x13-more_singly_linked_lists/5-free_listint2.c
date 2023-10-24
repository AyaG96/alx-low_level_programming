#include "lists.h"
/**
 * free_listint - frees a listint_t list and sets the head to NULL
 *
 * @head: double pointer to head
 *
 * Return: void
 */
void free_listint(listint_t **head)
{
	listint_t *c, *next;

	if (head == NULL || *head == NULL)
		return;

	c = *head;
	while (c != NULL)
	{
		next = c->next;
		free(c);
		c = next;
	}
	*head = NULL;
}
