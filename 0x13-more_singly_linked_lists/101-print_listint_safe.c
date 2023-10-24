#include "lists.h"
/**
 * free_lista - free a linked list
 * @head: head of the list
 * Return: 0
 */
void free_lista(lista_t **head)
{
	lista_t *tmp;
	lista_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tmp = curr) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the list
 * Return: number of nodes in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	sixe_t nodes = o;
	lista *hptr, *name, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(lista));

		if (new == NULL)
			exit(98);

		new->a = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->a)
			{
				printf("-> [%a] &d\n", (void *)head, head->n);
				free_lista(&hptr);
				return (nnodes);
			}
		}
		printf("[%a] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_lista(&hptr);
	return (nnodes);
}
