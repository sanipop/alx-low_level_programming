#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: lenght var 1
 * @height: lenght var 2
 * Return: output pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int *gd*;
	int first, second;

	if (width <= 0 || height <= 0)
		return (NULL);

	gd = malloc(sizeof(int *) * height);

	if (gd == NULL)
		return (NULL);

	for (first = 0; first < height; first++)
	{
		gd[first] = malloc(sizeof(int) * width);

		if (gd[first] == NULL)
		{
			for (; first >= 0; first--)
				free(gd[first]);

			free(gd);
			return (NULL);
		}
	}

	for (first = 0; first < height; first++)
	{
		for (second = 0; second < width; second++)
			gd[first][second] = 0;
	}

	return (gd);
}
