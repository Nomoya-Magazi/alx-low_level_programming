#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: is an input string
 * @dest: is an input string
 * @n: is an input integer
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		len++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > len)
		n = len;
	src = start;
	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
