#include <unistd.h>
#include "main.h"

int
_putchar(char c)
{
	for (c = '0'; c <= '7'; c++)
	{
		_putchar(c);
	}
	return (0);
}
