#include "lists.h"

/**
 * pop_listint - main function
 * @head: The address of pointer to first node.
 *
 * Return: The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int nd;

	if (!*head)
	{
		return (0);
	}

	nd = (*head)->n;
	list = (*head)->next;
	free(*head);
	*head = list;

	return (nd);
}
