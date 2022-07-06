#include <stdio.h>
/**
 * array_iterator -  a function that executes a function given as a parameter on each element of an array.
 * @size: the size of the array
 * @action: a pointer to the function
 * @array: the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;
	if (array && size && action)
	{
		for (x = 0; x < size; x++)
		{
			(*action)(array[x]);
		}
	}
}
