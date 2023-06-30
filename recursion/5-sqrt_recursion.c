#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to square root.
 * Return: a natural number.
 */

int
aux(int a, int b)
{
	if ((b * b) == a)
		return (b);

	if (b == a / 2)
		return (-1);

	return (aux(a, b + 1));
}



int _sqrt_recursion(int n)
{
	int b = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (aux(n, b));
}
