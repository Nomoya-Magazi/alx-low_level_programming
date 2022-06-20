#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: is the string input
 * Return: a pointer to the changed string
 */
char *string_toupper(char *s)
{
	char *ab = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (ab);
}
