#include "main.h"
/**
 * reverse_array - reverses the content
 * of an integer array
 * @a: is the input array
 * @n: is the number of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, b;

	while (i < n--)
	{
		b = a[i];
		a[i++] = a[n];
		a[n] = b;
	}
}
