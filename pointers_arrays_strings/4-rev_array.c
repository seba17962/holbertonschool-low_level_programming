#include "main.h"

/**
 *reverse_array - revers the content of an array of integers.
 *@a: the array.
 *@n:the number of elementr of the array to reverse.
 *
 */

void reverse_array(int *a, int n)
{
	int len_aux;
	int value;

	for (len_aux = 0; len_aux < n / 2; len_aux++)
	{
		value = a[len_aux];
		a[len_aux] = a[n - 1 - len_aux];
		a[n - 1 - len_aux] = value;
	}
}
