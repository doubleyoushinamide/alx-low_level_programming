#include "lists.h"

/**
 * listint_len - count the elements in the list
 * @h: start point of the list
 * Return: number of the elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next)
	{
		i++;
	}

	return i;
}
