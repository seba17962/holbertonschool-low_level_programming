#include "main.h"

/**
 *rev_string - print a string.
 *
 *@s: string
 *
 */


void rev_string(char *s)
{
	int c = 0, i, p;
	char *srev;
	char *end;
	char *begin;
	char aux;

	begin = s;
	srev = s;
	while (srev[c] != '\0')
	{
		c++;
	}
	end = s + c - 1;
	if (c % 2 == 0)
		p = (c - 1) / 2;
	else
		p = (c + 1) / 2;

	for (i = 0; i < p; i++)
	{
		aux = *begin;
		*begin = *end;
		*end = aux;
		begin++;
		end--;
	}
}
