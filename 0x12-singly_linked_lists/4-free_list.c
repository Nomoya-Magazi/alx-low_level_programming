#include "lists.h"
/**
 * free_list - a function that frees a list_t list
 * @head: the pointer to the header node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *newnode, *n;

	if (!head)
	{
		return;
	}
	
	newnode = head;
	while(newnode)
	{
		n = newnode->next;
		free(newnode->str);
		free(newnode);
		newnode = n;
	}
}
