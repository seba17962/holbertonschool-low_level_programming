#include "main.h"

/**
 *puts_half - print the second half of a string
 *@str: the string
 *
 */
void puts_half(char *str)
{
	int length_of_the_string = 0, n;

	while (*str != '\0')
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
		while (*str != '\0')
		{
			_putchar(*str++);
			n++;
		}
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
		while (*str != '\0')
		{
			_putchar(*str++);
			n++;
		}
	}
	_putchar('\n');
}
