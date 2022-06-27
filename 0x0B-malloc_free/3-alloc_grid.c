#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: the input integer at number of columns
 * @height: the input integer at number of rows
 * Return: a pointer to a 2D array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **tD;
	int hgt_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	tD = malloc(sizeof(int *) * height);

	if (tD == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		tD[hgt_i] = malloc(sizeof(int) * width);

		if (tD[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(tD[hgt_i]);

			free(tD);
			return (NULL);
		}
	}
	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			tD[hgt_i][wid_i] = 0;
	}
	return (tD);
}
