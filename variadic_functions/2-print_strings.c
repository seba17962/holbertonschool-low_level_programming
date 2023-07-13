#include "variadic_functions.h"

/**
 *	print_strings - print n strings
 *	@separator: the separator of strings
 *	@n: the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list strings;
	char *str = NULL;

	va_start(strings, n);
	if (!separator)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	putchar('\n');
}
