#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _isdigit - Check if character is a digit
 * @c: the character to be checked
 *
 *Return: 1 if c is a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
