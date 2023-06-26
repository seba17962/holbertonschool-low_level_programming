#include "main.h"

/**
 *reverse_array - revers the content of an array of integers.
 *@a: the array.
 *@n:the number of elementr of the array to reverse.
 *
 */

void reverse_array(int *a, int n)
{
	int *aux;
	int len_a = 0;
	int count = 0;

	aux = a;

	for (count = 0; count <= n; count++)
	{
		aux[count] = a[len_a];
		len_a++;
	}

	a = aux;
}
