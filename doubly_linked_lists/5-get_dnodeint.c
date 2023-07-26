#include "lists.h"

/**
 *	get_dnodeint_at_index - return the nth node of a doble linked list
 *	@head: the pointer to the first node
 *	@index: the indez of the node
 *	Return: the nth node of a doble linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux = NULL;

	aux = head;
	while (aux != NULL)
	{
		if (i == index)
		{
			return (aux);
		}
		else if (i < index)
		{
			aux = aux->next;
			i++;
		}
	}
	return (NULL);
}
