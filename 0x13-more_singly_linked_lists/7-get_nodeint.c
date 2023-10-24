#include "lists.h"

/**
 * get_nodeint_at_index - retrieves a nodeat an index
 * @head: pointer to the first node of the element
 * @index: node desired position to retrieve
 * Return: pointer to the retrieved node
 */
listint_t *get_nodeint_at_index(listint_y *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
