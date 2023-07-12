#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - perform operations
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int calc = 0, num1 = 0, num2 = 0;
	char *operator = NULL;
	int	(*o)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0)
			&& num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	calc = get_op_func(operator) (num1, num2);

	printf("%d\n", calc);
	return (0);
}
