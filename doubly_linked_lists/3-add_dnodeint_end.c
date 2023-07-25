#include "lists.h"

/**
 *	add_dnodeint_end - add a new node at the end of the linked list
 *	@head: the pointer to pointer to head
 *	@n: the int to add in the node
 *	Return: the addres of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_Node = NULL;
	dlistint_t *aux = NULL;

	new_Node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_Node;
	}
	else
	{
		new_Node->n = n;
		new_Node->next = NULL;
		new_Node->prev = NULL;
		aux = *head;
		while (aux != NULL)
		{
			if (aux->next == NULL)
			{
				aux->next = new_Node;
				aux->next->prev = aux;
				aux = new_Node;
			}

		aux = aux->next;
		}
	}
	return (new_Node);
}
