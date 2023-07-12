#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: the number of parameters.
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list parameters;

	va_start(parameters, n);

	if (n == 0)
		return (0);

	else if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(parameters, int);
		}
	}
	va_end(parameters);

	return (sum);
}
