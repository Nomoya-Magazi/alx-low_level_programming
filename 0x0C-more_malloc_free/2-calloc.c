#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb:the number of memory spaces
 * @size:the size of nmemb
 * Return: returns pointer ro allocated space, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);

	if (space == NULL);
	return (NULL);

	for (; i < nmwmb * size; i +=)
		*(space + i) = 0;

	return (space);
}
