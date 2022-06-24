<<<<<<< HEAD
=======
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 *On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
>>>>>>> 01c68ac6a536b6f3dfd975dd470e2a7c40447200
