#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - a function that creates an array of integers
 * @min: the min number to start
 * @max: the max number to start
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *new_arr;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min;
	new_arr = malloc((diff + 1) * sizeof(int));
	if (new_arr == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
		new_arr[i] = min ++;

	return (new_arr);
}
