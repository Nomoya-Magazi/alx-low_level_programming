<<<<<<< HEAD
#include "main.h"

/**
 * char *_strcat - concatenates two strings,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: a pointer to destination of string
 * @src: a pointer to source the string to copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{

	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}

=======
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
>>>>>>> ca3ea54eae6bcb34417218c8e188a7c8522302f9
