#include "main.h"

/**
 *_puts - print a string.
 *
 *@str: string
 * 
 */


void _puts(char *str)
{
char leter = 0;

while (*str++)
{
	_putchar(leter);
	leter++;
}
_putchar('\n');

}
