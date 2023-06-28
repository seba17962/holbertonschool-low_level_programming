#include "main.h"

/**
 * factorial - return the factorial of a guiven number
 * @n: number.
 * Return: the factorial
 */


int factorial(int n)
{

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
