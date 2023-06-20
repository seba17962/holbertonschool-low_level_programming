#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9 followed by a new line
 * @n: de number to print
 *
 */

void print_numbers(void)
{
	int n;
	for (n = 0; n <= 9; n++)
		_putchar(n);
		_putchar('\n');
}
