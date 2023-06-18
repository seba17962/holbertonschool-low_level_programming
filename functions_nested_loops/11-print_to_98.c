#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_to_98 - print all natural numbers from n to 98
*
*@n: first number
*
*/
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		_putchar('n');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
