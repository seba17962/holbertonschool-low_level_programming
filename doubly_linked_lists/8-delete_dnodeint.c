#include "lists.h"

/**
 *	delete_dnodeint_at_index - delete the node at index
 *	@head: the pointer to a pointer to the first node
 *	@index: the position of the node to delete
 *	Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = (*head);

	if (aux == NULL)
		return (-1);

	while (index != 0)
	{
		if (aux == NULL)
			return (-1);
		aux = aux->next;
		index--;
	}

	if (aux == (*head))
	{
		*head = aux->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		aux->prev->next = aux->next;
		if (aux->next)
			aux->next->prev = aux->prev;
	}

	free(aux);
	return (1);
}
