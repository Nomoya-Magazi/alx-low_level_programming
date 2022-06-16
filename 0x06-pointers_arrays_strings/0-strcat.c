#include "main.h"                                                                                                                                     
/**
 * _strcat - concatenates two strings
 * @src: is the source string
 * @dest: is the destination string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}                                                                                                                                                  
