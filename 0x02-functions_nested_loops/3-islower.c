#include "main.h"

/**
 * _islower - is the entry
 * @c: character in ASCII code
 * Return: 1 is lowercase and 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}
	return (low);
}
