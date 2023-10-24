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
	listint_t *c;

	while (*head != NULL)
	{
		c = *head;
		*head = (*head)->next;
		free(*c);
	}
	*head = NULL;
}
