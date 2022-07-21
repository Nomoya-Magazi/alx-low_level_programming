#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 *
 * return:0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
