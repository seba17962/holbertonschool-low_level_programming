#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagonal - print 'n' times "\"
 *@n: the number of times the character should be repeated
 */

void print_diagonal(int n)
{
	int c, b;

	if (n != 0)
	{
		for (c = 0; c < n; c++)
		{
			for (b = 0; b < c; b++)
			{
				_putchar(' ');
			}
			_putchar(92);

			if (c == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
