#include "lists.h"

/**
 *	dlistint_len - return the number of elementrs in a linked file
 *	@h: the pointer to the first node
 *	Return: the number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
