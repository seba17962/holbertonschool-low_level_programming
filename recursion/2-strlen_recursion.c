#include "main.h"

/**
 * _strlen_recursion - return the length os a string
 * @s: the string.
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
