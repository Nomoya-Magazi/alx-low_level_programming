#include "lists.h"
/**
 *  print_listint - a function that prints all the elements
 *  @h: the input
 *
 *  Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
n++;
}	
	return (num);
}
