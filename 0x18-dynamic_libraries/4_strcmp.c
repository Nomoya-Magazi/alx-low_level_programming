<<<<<<< HEAD
<<<<<<< HEAD
int _strcmp(char *s1, char *s2)
{
	return (0);
}
=======

>>>>>>> 3a89fd095a380fe995434762f4bec50465a50b00
=======
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: is an input string
 * @s2: is an input string
 * Return: the difference s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
>>>>>>> 800da17f651747bd4e380e828b3a5431c5a8dfb7
