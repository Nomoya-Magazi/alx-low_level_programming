#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the input string
 * @accept: the input character to locare into string s
 * Return: the number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
			{
				bytes++;
				break;
			}

			else if (accept[ind + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
