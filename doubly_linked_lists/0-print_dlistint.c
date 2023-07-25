#include "lists.h"

/**
 *	print_dlistint - prints all the elementrs of a list
 *	@h: a pointer to the header
 *	Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elem++;
	}
	return (elem);
}
