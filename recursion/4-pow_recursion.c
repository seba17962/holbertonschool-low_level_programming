#include "main.h"

/**
 * _pow_recursion - raised x to the power of y
 * @x: the base.
 * @y: the power
 * Return: raised x to the power of y, if y slower than 0, return -1
 */


int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y > 0)
		x *= (_pow_recursion(x, y - 1));

	return (x);
}
