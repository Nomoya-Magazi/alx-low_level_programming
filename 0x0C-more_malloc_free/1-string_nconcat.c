#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the input pointer of the first string
 * @s2: the input pointer of the second string
 * @n: the input integer of number of string to concatenate
 * Return: a pointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conca;
	unsigned int len = n, ind;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ind = 0; s1[ind]; ind++)
		len++;

	conca = malloc(sizeof(char) * (len + 1));

	if (conca == NULL)
		return (NULL);

	len = 0;

	for (ind = 0; s1[ind]; ind++)
		conca[len++] = s1[ind];

	for (ind = 0; s2[ind] && ind < n; ind++)
		conca[len++] = s2[ind];

	conca[len] = '\0';

	return (conca);
}
