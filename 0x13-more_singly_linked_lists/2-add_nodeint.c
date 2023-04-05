#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning
 * @head: start point to the list
 * @n: data to the new node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
