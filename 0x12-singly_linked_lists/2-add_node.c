#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: the pointer address of the header node
 * @str: the pointer of the string node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = NULL;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL || head == NULL)
	{
		return (NULL);
	}
	if (str)
	{
		newnode->str = strdup(str);
		newnode->len = _strlen(newnode->str);
	}
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
