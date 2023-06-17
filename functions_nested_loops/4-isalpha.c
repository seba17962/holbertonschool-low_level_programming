#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _isalpha - Checks if character is an alphabet caracter.
 * @c: The caracter to be checked.
 *
 * Return: 1 if caracter is an alphabet caracter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && 'Z')
		return (1);

	else
		return (0);
}
