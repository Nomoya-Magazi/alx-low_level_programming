#include "lists.h"
/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list
 * @head: the pointer to the head
 * @n: node to be added
 * Return:the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeint;
	int n = 0;

	new_nodeint = (listint_t *) malloc(sizeof(listint_t));

	if (new_nodeint == NULL)
	{
		free(new_nodeint);
		return (NULL);
	}
	new_nodeint-> = strdup(n);
	if (new_nodeint->n == NULL)
	{
		free(new_nodeint);
		return (NULL);
	}
	while (n[] != '\0')
	{
		n++;
	}
	new_nodeint->n = n;
	new_node-> = *head;
	*head = new_nodeint;

	return (new_nodeint);
}
