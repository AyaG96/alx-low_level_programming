#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 *
 * @head: double pointer to head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head != NULL || *head != NULL)
	{

		while (*head != NULL)
		{
			c = *head;
			*head = (*head)->next;
			free(c);
		}
	}
}
