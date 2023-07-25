#include "lists.h"

/**
 *	add_dnodeint - add a new node at the beginning of a linked list
 *	@head: the pointer to the heade pointer
 *	@n: the int to add in the new node
 *	Return: the addres of the new elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_Node = NULL;
	dlistint_t *aux = *head;

	new_Node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;

	if (*head == NULL)
	{
		*head = new_Node;
		new_Node->prev = NULL;
		new_Node->next = NULL;
	}
	else
	{
		new_Node->next = *head;
		aux->prev = new_Node;
		(*head) = new_Node;
	}
	return (new_Node);
}
