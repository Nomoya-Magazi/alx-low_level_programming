#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: Pointer to the head
 * Description: This function prints all the elements of a listint_t list.
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
