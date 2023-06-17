#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _islower - Checks if character is lowercase.
 * @c: The caracter to be checked.
 *
 * Return: 1 if caracter is lowercase, 0 otherwise
 */

int
_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
