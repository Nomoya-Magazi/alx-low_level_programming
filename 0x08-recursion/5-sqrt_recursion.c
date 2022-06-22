#include "main.h"
int _sqrt(int num, int root);
/**
 * _sqrt_recursion - it returns the value of square root of n
 * @n: an input integer
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @num: previous value
 * @root: square root value
 * Return: the square root
 */
int _sqrt(int num, int root)
{
	if (num > root)
		return (-1);
	else if (num * num == root)
		return (num);
	return (_sqrt(num + 1, root));
}
