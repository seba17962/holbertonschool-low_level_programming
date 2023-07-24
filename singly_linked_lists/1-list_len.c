#include "lists.h"

/**
 *	list_len - return the number of elements in a linked list_t
 *	@h: a pointer to a linked list
 *	Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
