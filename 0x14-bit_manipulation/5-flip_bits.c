#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: unsigned long int
 * @m:unsigned long int
 *
 * Return:the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t = 0;
	unsigned long int q = n ^ m;

	while (q)
	{
		t += (q & 1);
		(q >>= 1);
	}
	return (t);
}
