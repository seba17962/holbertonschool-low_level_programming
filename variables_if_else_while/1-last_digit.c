#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %i and is greater than 5", n, last_digit);
	}
	if (last_digit == 5)
	{
		printf("Last digit of %d is %i and is 0", n, last_digit);
	}
	if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
