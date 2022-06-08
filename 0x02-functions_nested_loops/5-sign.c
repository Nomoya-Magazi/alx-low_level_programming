#include "main.h"

/**
 * print_sign - shows if the input is an integer
 * @n: is an integer
 * Return: os 1 if mumber is positive, 0 if number is 0,
 * or -1 if number is negative
 */
int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
