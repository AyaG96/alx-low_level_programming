#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to head
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	if (head != NULL)
		return (NULL);

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (temp);
		head = head->next;
	}

}
