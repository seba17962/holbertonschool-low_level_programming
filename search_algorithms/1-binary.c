#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int i_start = 0;
	int i_final = size - 1;
	int i_mid = 0;

	if (!array || size == 0)
		return (-1);

	while (i_start <= i_final)
	{
		i_mid = i_start + (i_final - i_start) / 2;
		
		printf("Searching in array: ");

		for (i = i_start; i < i_final; i++)
			printf("%d, ", array[i]);

		if (i == i_final)
			printf("%d", array[i]);

		printf("\n");

		if (array[i_mid] == value)
			return (i_mid);

		else if (array[i_mid] < value)
			i_start = i_mid + 1;

		else
			i_final = i_mid - 1;
	}
	return (-1);
}
