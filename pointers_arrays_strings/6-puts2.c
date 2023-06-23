#include "main.h"

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(*str);
	    }
		str++;
		i++;
	}
	putchar('\n');
}
