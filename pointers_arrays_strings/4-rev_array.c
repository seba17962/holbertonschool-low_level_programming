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
	int len_aux = n;
	int count = 0;

	aux = a;
	while (a[count] != a[n])
	{
		a[count] = aux[len_aux];
		count++;
		len_aux--;
	}
}
