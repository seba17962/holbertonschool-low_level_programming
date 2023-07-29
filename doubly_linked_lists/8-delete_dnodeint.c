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
	unsigned int i = 0;

	if (*head == NULL)
		return (1);
	if (aux->prev == NULL && aux->next == NULL)
	{
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		aux = aux->next;
		(*head) = aux;
		aux->prev = NULL;
		return (1);
	}
	else
	{
		while (aux->next != NULL)
		{
			if (i == index)
			{
				aux->prev->next = aux->next;
				aux->next->prev = aux->prev;
				/**free(aux)*/
				return (1);
			}
			aux = aux->next;
			i++;
		}
		if (i == index)
		{
			aux = aux->prev;
			aux->next = NULL;
		}
	}
	return (-1);
}
