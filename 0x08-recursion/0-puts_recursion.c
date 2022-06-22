<<<<<<< HEAD
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the input string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else 
		_putchar('\n');
}
=======
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the input
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
>>>>>>> b98846c3e857d0ad5f4dc84258ed518927192707
