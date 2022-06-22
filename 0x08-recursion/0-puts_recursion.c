<<<<<<< HEAD
#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s: the input
 * Return: nothing
 */

void _puts_recursion(char *s);
{
	int i = 0;
	while (s[i] ! = '\0')
	{
		_putchar9s[i];
		i +=;
	}
	-putchar('\n';)
}

=======
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
>>>>>>> 7444dbe672092221f131eb4a1f7fd3e6003d2db7
