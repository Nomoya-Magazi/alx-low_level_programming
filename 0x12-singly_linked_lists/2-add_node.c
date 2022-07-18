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
	list_t *new_node;
	int len_str = 0;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len_str] != '\0')
	{
		len_str++;
	}
	new_node->len = len_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}