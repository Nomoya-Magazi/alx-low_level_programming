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
char *dest[] = "Hello";
char *src[] = "World";
strcat (dest,src);

printf ("concatenated string: %s\n", dest);
return (0);
}
