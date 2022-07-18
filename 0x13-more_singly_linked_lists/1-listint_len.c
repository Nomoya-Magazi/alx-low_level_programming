#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * @h: the pointer to the next node
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
