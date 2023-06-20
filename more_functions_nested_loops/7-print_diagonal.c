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
			if (b != 0)
			{
				_putchar(' ');
			}
			while (b < n)
			{
				_putchar(92);
				_putchar('\n');
			}
			_putchar('\n');
			c++;
		}
	}
	_putchar('\n');
}
