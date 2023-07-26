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

	new_Node->n = n;
	new_Node->next = NULL;
	new_Node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_Node;
		return (new_Node);
	}

	aux = *head;
	while (aux != NULL)
	{
		aux = aux->next;
	}
	aux->next = new_Node;
	new_Node->prev = aux;
	return (new_Node);
}
