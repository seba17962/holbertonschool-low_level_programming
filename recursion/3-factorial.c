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

	else if (n <= 1 && n >= 0)
		return 1;

	else
		return (n * factorial(n - 1));
}
