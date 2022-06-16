#include "main.h"
/**
 * _strncpy - copies two srings
 * @src: is the source string
 * @dest: is the destination
 * @n: is the input integer
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, len = 0;

	while (src[index++])
		len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
