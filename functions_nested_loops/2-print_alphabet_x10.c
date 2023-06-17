#include <stdio.h>
#include <string.h>
#include "main.h"

void
print_alphabet_x10(void)
{
	char c;
	int count = 0;

	while (count <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	count++;
	}
}
