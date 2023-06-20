#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * more_numbers - print 0 - 14
 *
 */

void more_numbers(void)
{
	int n, h;

	for (h = 0; h <= 10; h++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
