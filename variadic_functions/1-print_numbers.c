#include "variadic_functions.h"

/**
 *	print_numbers - print numbers followed a new line
 *	@separator: where separator is the string to be printed between numbers
 *	@n: the number of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;

	va_start(num, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d%s ", va_arg(num, int), separator);
		}
		else
			printf("%d\n", va_arg(num, int));
	}
	va_end(num);
}
