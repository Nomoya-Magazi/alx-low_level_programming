#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * Write a function that swaps the values of two integers
 * Retun: is 0
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
=======
/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
>>>>>>> 8c6eea12845b41e4976e477b1dafa07667323890
}
