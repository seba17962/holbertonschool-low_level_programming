#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagonal - print 'n' times "\"
 *@n: the number of times the character should be repeated
 */

void print_diagonal(int n)
{
	int c = 0;
	int b = 0;

	if (n != 0)
	{
		while (c < n)
		{
			while (b > 0 && b < n)
			{
				_putchar(' ');
			}
			_putchar(92);
			c++;
		}
	}
	_putchar('\n');
}
