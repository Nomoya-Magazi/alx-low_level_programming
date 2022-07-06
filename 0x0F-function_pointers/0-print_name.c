#include "function_pointers"
/**
 * print_name - a function that prints a name.
 * @name: the name to be printed
 * @f: fuction name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
