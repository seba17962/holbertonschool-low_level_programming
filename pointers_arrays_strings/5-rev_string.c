#include "main.h"

/**
 *rev_string - print a string.
 *
 *@s: string
 *
 */


void rev_string(char *s)
{
	int c = 0, i;
	char *srev;
	char *end;
	char *begin;
	char aux;

	srev = s;
	while (srev[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < (c - 1) / 2; i++)
	{
		aux = *begin;
		*begin = *end;
		*end = aux;
		begin++;
		end++;
	}
}
