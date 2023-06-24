#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 *@s: pointer to a string
 *
 *Return: the int value with the sign
 */


int _atoi(char *s)
{
	int sig = 1;
	int res;
	int nb;

	do {
		if (*s >= 0 && *s <= 9)
		{
			res = (res * 10) + (*s - '0');
		}
		else if (*s == '-')
		{
			sig *= -1;
		}
		else if (res <= 0)
		{
			return (0);
		}
		} while (*s++);
	nb = res * sig;
	return (nb);
}
