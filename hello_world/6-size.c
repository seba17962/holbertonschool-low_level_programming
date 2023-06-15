#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long longlongType;
	char charType;

	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long: %zu bytes\n", sizeof(longlongType));
	printf("Size of char: %zu bytes\n", sizeof(charType));

	return (0);
}
