#include "main.h"
#include <stdlib.h>

/**
 *	**alloc_grid - return a pointer to a dimensional array of integres
 *	@width:the width of the bidimensiona pointer
 *	@height: the height of the bidimensional pointer
 *	Return: a bidimentional pointer
 */

int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int i = 0, j = 0, k = 0;

	if (width == 0 || height == 0 || width < 0 || height < 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(p[k]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
