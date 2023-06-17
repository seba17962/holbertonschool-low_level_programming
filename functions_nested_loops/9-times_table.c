#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* times_table - print the 9 time table, starting with 0.
*
*/
void times_table(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n * 0);
		_putchar(',');
		_putchar(' ');
		_putchar(n * 1);
		_putchar(',');
		_putchar(' ');
		_putchar(n * 2);
		_putchar(',');
		_putchar(' ');
		_putchar(n * 3);
		_putchar(',');
		_putchar(' ');
		_putchar(n * 4);
		_putchar(',');
		_putchar(' ');
		_putchar(n * 5);
		_putchar(',');
		_putchar(' ');
		_putchar(n * 6);
		_putchar(',');
		_putchar(' ');
		_putchar(n * 7);
		_putchar(',');
		_putchar(' ');
		_putchar(n * 8);
		_putchar(',');
		_putchar(' ');
		_putchar(n * 9);
		_putchar('\n');
	}
}
