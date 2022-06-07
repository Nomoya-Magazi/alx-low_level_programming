#include "main.h"
/**
 * main-entry point
 * Return: is 0
 */
int main(void)
{
	char *sh = "main.c";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
