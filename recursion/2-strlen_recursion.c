#include "main.h"

/**
 * _strlen_recursion - return the length os a string
 * @s: the string.
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return;
	}
		len++;
		_strlen_recursion(s + 1);
	
	return (len);
}
