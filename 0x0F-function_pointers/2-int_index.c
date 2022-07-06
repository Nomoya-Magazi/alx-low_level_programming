#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * @array: array of elemets 
 * Return: index of the first element cmp function does not return 0
 * if no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
