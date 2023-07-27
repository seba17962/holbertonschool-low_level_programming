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
	unsigned int i = 0;

	new_Node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
		return (NULL);
	new_Node->n = n;
	new_Node->next = NULL;
	new_Node->prev = NULL;
	if (idx == 0)
	{
		new_Node->next = *h;
		if (*h == NULL)
			*h = new_Node;
		*h = new_Node;
		return (new_Node);
	}
	aux = (*h);

	while (aux != NULL)
	{
		if (i == idx)
		{
			new_Node->prev = aux->prev;
			new_Node->next = aux;
			aux->prev->next = new_Node;
			aux->prev = new_Node;
			return (new_Node);
		}
		aux = aux->next;
		i++;
	}
	if (i == idx)
	{
		aux->next = new_Node;
		new_Node->prev = aux;
		return (new_Node);
	}
	return (NULL);
}
