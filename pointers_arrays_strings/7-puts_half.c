#include "main.h"

/**
 *puts_half - print the second half of a string
 *@str: the string
 *
 */
void puts_half(char *str)
{
	int len = 0, n;
	char *aux_pointer;

	aux_pointer = str;
	while (*aux_pointer != '\0')
	{
		aux_pointer++;
		len++;
	}
	aux_pointer = str;
	if (len % 2 == 0)
	{
		n = len / 2;

	}
	else
	{
		n = ((len - 1) / 2) + 1;
	}
		while (aux_pointer[n] != '\0')
		{
			_putchar(aux_pointer[n]);
			n++;
		}

	_putchar('\n');
}
