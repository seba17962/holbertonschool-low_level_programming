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
	int len_aux = 0;
	int count = 0;

	aux = a;
	while (a[len_aux] <= a[n])
	{
		len_aux++;
	}

	while (aux[len_aux] >= aux[0])
	{
		a[count] = aux[len_aux];
		count++;
		len_aux--;
	}
}
