#include "main.h"

/**
 *puts_half - print the second half of a string
 *@str: the string
 *
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (*str != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = str[len / 2]; i < '\0'; i++)
		{
			_putchar(*str++);
		}
	}
	else
	{
		for (i = str[((len + 1) / 2) + 1]; i < '\0'; i++)
		{
			_putchar(*str++);
		}
	}
	_putchar('\n');
}
