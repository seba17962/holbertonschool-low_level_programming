#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - print 'n' times "#"
 *
 *Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz");

		else if (n % 5 == 0 && n % 3 != 0)
			printf("Buzz");

		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");

		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
