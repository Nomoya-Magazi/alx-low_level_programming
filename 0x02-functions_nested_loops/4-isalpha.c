#include "main.h"

/**
 * _isalpha - is the entry
 * @c: a character in ASCII code
 * Return: is 1 if output is a letter, lowercase
 * or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	char low, up;
	int letter = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low || c == up)
				letter = 1;
		}
	}
}
