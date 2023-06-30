#include "main.h"


int
aux(int a, int b)
{
	if ((b * b) == a)
		return (0);

	if (b == a / 2)
		return (1);

	return (aux(a, b + 1));
}

int
is_prime_number(int n)
{
	int b = 0;

	if (n <= 1)
		return (0);

	return (aux(n, b));
}
