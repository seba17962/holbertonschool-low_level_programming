#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum to int.
 * @a: first int
 * @b: second int
 * Return: the sum
 */

int op_add(int a, int b)
{
	int sum = 0;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - calculate the diference of to int
 * @a: first int
 * @b: second int
 * Return: the diference of a and b
 */

int op_sub(int a, int b)
{
	int dif = 0;

	dif = abs(a - b);
	return (dif);
}
/**
 * op_mul - calculate the product of to int
 * @a: the first int
 * @b: the second int
 * Return: the product of to int
 */

int op_mul(int a, int b)
{
	int prod = 0;

	prod = a * b;
	return (prod);
}
/**
 * op_div - div to int
 * @a: first int
 * @b: second int
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	int div = 0;

	div = a / b;
	return (div);
}

/**
 * op_mod - calculate the remainder of a division
 * @a: first int
 * @b: second int
 * Return: the remainder of a division
 */

int op_mod(int a, int b)
{
	int mod = 0;

	mod = a % b;
	return (mod);
}
