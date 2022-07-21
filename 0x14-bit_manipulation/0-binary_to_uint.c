#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to the string
 *
 * Return: the converted number, or 0 if 
 * there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '0'; i++)
	{
		n <<= 1;
		
		if (b[i] == '1')
			n += 1;
		else
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
		}
	}
	return (n);
}
