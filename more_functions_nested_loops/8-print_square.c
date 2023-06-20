#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_square - print 'n' times "#"
 *@size: the size of the square
 */

void print_square(int size)
{
	int length, width;

	if (size != 0)
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
