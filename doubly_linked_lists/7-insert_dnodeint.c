#include "lists.h"

/**
 *	insert_dnodeint_at_index - insert a new node at a given position
 *	@h: the pointer to the head pointer to the first node
 *	@idx: the intex
 *	@n: the int to add in the new node
 *	Return: the addres of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_Node = NULL;
	dlistint_t *aux = NULL;

	aux = (*h);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}

	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	new_Node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->prev = aux;
	new_Node->next = aux->next;
	new_Node->next->prev = new_Node;
	aux->next = new_Node;
	return (new_Node);
}
