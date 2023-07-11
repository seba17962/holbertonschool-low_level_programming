#include "function_pointers.h"

/**
 *	print_name - prints a name
 *	@name: the name to print
 *	@f: the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	(*f)(name);
}
