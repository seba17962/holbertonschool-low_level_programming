#include "lists.h"

/**
 *	print_list - print all the elements of a list
 *	@h: the pointer to the list
 *	Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
