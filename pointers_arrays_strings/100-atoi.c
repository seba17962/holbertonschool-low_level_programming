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
	int r = 0;
	int sig = 1;
	int res;

	do {
		if (s[r] >= '0' && s[r] <= '9')
		{
			res = (res * 10) + (s[r] - '0');
		}
		else if (s[r] == '-')
		{
			sig *= -1;
		}
		else if (res > 0)
			break;
	} while (s[r]++);
	return (res * sig);
}
