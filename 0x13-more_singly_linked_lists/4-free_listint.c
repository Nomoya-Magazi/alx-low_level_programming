#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: the pointer to the heade
 *
 * Reurn: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head;
		head = list->next;
		free(list);
	}
}
