#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns lenght;
 */
<<<<<<< HEAD

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
=======
int _strlen(char *s)
{
	int count, inc;
	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;
	
	return (inc);
>>>>>>> cb2a922bcd52b8641c4662e27b09f54a07daf8ff
}
