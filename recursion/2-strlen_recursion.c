#include "main.h"

/**
 * _strlen_recursion - return the length os a string
 * @s: the string.
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
