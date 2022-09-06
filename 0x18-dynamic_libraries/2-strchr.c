#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the input string to search
 * @c: the input character to locate ito string s
 * Return: a pointer to the first character c in string s
 */
char *_strchr(char *s, char c)
{
	int ind;

	for (ind = 0; s[ind] >= '\0'; ind++)
	{
		if (s[ind] == c)
			return (s + ind);
	}

	return ('\0');
}
