#include "lists.h"

/**
 * print_listint - print the elements in the list
 * @h: the start of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		nodes++;
	}

	return nodes;
}
