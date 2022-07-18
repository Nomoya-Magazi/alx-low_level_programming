#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: the pointer to the heade
 *
 * Reurn: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *freeze;

	while (head)
	{
		freeze = head->next;
		free(head->str);
		free(head);
		head = freeze;
	}
}
