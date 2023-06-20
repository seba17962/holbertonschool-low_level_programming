#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_triangle - print a triangle with "#"
 *@size: the size of the square
 */

void print_triangle(int size)
{
	int length, width;

	if (size > 0)
	{
		for (length = 1; length < size; length++)
		{
			for (width = size - length; width > 0; width--)
			{
				_putchar(' ');
			}
			for (width = 0; width < length; width++)
			{
				_putchar('#');
			}
			if (length == size)
				continue;

			_putchar('\n');
		}
	}
}
